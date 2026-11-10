#!/usr/bin/env python3
"""Generate comparable single-TU array benchmarks.

Variants:
  plain.c     - plain procedural C, fixed-size array (no generic container)
  plain.cpp   - same C-compatible source compiled as C++
  c_includes.c- one typed array implementation per type, by repeated include
  c_hooper.c  - single byte-oriented array implementation, typed union phantom and macros
  cpp_template.cpp - one templated array per type, no STL containers
  cpp_stl.cpp - identical cpp_template.cpp plus some unused STL includes
"""
import sys
from pathlib import Path

n = int(sys.argv[1]) if len(sys.argv) > 1 else 120
root = Path(__file__).resolve().parent
out = root / f'generated_{n}'
out.mkdir(exist_ok=True)
header = '''#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
'''
types = '\n'.join(f'typedef struct {{ uint32_t x, y, z, w; }} Item{i:03d};' for i in range(n))

# Generic typed array specialization via re-include: no include guard intentionally.
(root / 'typed_array.inc').write_text('''/* T and NAME must be defined. Deliberately not include-guarded. */
typedef struct { T *data; size_t count, capacity; } NAME;
static void CAT(NAME,_push)(NAME *a, T value) {
    if (a->count == a->capacity) {
        size_t nc = a->capacity ? a->capacity * 2 : 4;
        if (nc < a->capacity || nc > SIZE_MAX / sizeof(T)) abort();
        T *p = (T *)realloc(a->data, nc * sizeof(T));
        if (!p) abort();
        a->data = p;
        a->capacity = nc;
    }
    a->data[a->count++] = value;
}
static T *CAT(NAME,_at)(NAME *a, size_t i) {
    if (i >= a->count) abort();
    return &a->data[i];
}
''')

hooper = '''/* One byte-oriented implementation. The type witness in Array(T) is never accessed. */
typedef struct { void *data; size_t count, capacity; } RawArray;
#if defined(__GNUC__) || defined(__clang__)
#define NOINLINE __attribute__((noinline))
#else
#define NOINLINE
#endif
static NOINLINE void raw_push(RawArray *a, const void *value, size_t width) {
    if (a->count == a->capacity) {
        size_t nc = a->capacity ? a->capacity * 2 : 4;
        if (nc < a->capacity || nc > SIZE_MAX / width) abort();
        void *p = realloc(a->data, nc * width);
        if (!p) abort();
        a->data = p;
        a->capacity = nc;
    }
    memcpy((unsigned char*)a->data + a->count * width, value, width);
    ++a->count;
}
static NOINLINE void *raw_at(RawArray *a, size_t i, size_t width) {
    if (i >= a->count) abort();
    return (unsigned char*)a->data + i * width;
}
/* C11: __typeof__ is a GCC/Clang extension; C23 standardizes typeof. */
#define Array(T) union { RawArray raw; T *_element_type; }
#define array_push(a, v) do { \\
    __typeof__(*((a)->_element_type)) _tmp = (v); \\
    raw_push(&(a)->raw, &_tmp, sizeof(_tmp)); \\
} while (0)
#define array_at(a, i) ((__typeof__((a)->_element_type)) \\
    raw_at(&(a)->raw, (i), sizeof(*(a)->_element_type)))
'''

cpp = '''template<class T> struct Array {
    T *data;
    size_t count, capacity;
    void push(T value) {
        if (count == capacity) {
            size_t nc = capacity ? capacity * 2 : 4;
            if (nc < capacity || nc > SIZE_MAX / sizeof(T)) abort();
            T *p = static_cast<T *>(realloc(data, nc * sizeof(T)));
            if (!p) abort();
            data = p;
            capacity = nc;
        }
        data[count++] = value;
    }
    T *at(size_t i) {
        if (i >= count) abort();
        return &data[i];
    }
};
'''

arr_incs = '\n'.join(f'#define T Item{i:03d}\n#define NAME Item{i:03d}Array\n#include "../typed_array.inc"\n#undef T\n#undef NAME' for i in range(n))

# For every variant, keep the same consumer code structure, with per-type calls.
def emit_worker(i, variant):
    t = f'Item{i:03d}'
    k = str(i)
    if variant == 'plain':
        setup = f'{t} data[128]; size_t count = 0;'
        add = 'data[count++] = value;'
        access = 'data[j]'
        finish = ''
    elif variant == 'c_includes':
        setup = f'{t}Array array = {{0}};'
        add = f'{t}Array_push(&array, value);'
        access = f'(*{t}Array_at(&array, j))'
        finish = 'free(array.data);'
    elif variant == 'c_hooper':
        setup = f'{t}Array array = {{0}};'
        add = 'array_push(&array, value);'
        access = '(*array_at(&array, j))'
        finish = 'free(array.raw.data);'
    elif variant == 'cpp_template':
        setup = f'Array<{t}> array{{}};'
        add = 'array.push(value);'
        access = '(*array.at(j))'
        finish = 'free(array.data);'
    return f'''static uint64_t work_{i:03d}(size_t limit) {{
    {setup}
    for (size_t j = 0; j < limit; ++j) {{
        {t} value = {{ (uint32_t)(j + {k}), (uint32_t)(j * 3 + {k}),
                     (uint32_t)(j * 5 + {k}), (uint32_t)(j * 7 + {k}) }};
        {add}
    }}
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {{
        const {t} *p = &{access};
        result += p->x + p->y + p->z + p->w;
    }}
    {finish}
    return result;
}}
'''

# All variants same workload, 17-20 items per container; preserve output through printf.
# C/C++ both support these C style constants; all Item are trivially copyable.
main = '''#include <stdio.h>
int main(int argc, char **argv) {
    (void)argv;
    size_t limit = 17 + ((unsigned)argc % 4);
    uint64_t sum = 0;
'''+''.join(f'    sum += work_{i:03d}(limit);\n' for i in range(n))+'''    printf("%llu\\n", (unsigned long long)sum);
    return 0;
}
'''

for variant in ['plain','c_includes','c_hooper','cpp_template']:
    if variant == 'plain':
        ext = 'c'
        middle = ''
    elif variant == 'c_includes':
        ext = 'c'
        middle = '#define CAT2(a,b) a##b\n#define CAT(a,b) CAT2(a,b)\n' + arr_incs
    elif variant == 'c_hooper':
        ext = 'c'
        middle = hooper + '\n' + '\n'.join(f'typedef Array(Item{i:03d}) Item{i:03d}Array;' for i in range(n))
    else:
        ext = 'cpp'
        middle = cpp
    source = header + '\n' + types + '\n' + middle + '\n' + ''.join(emit_worker(i, variant) for i in range(n)) + main
    (out / f'{variant}.{ext}').write_text(source)
    if variant == 'plain':
        (out / 'plain.cpp').write_text(source)
    if variant == 'cpp_template':
        (out / 'cpp_stl.cpp').write_text('#include <vector>\n#include <algorithm>\n#include <unordered_map>\n' + source)
print(out)
