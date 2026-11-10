#!/usr/bin/env python3
"""Replace Hooper fastpath generic library with idiomatic shared version, retaining 120-type workload."""
from pathlib import Path
ROOT=Path(__file__).resolve().parent/'compile_120_sources'
base=(ROOT/'c_hooper_fastpath.c').read_text()
a=base.index('/* One byte-oriented implementation.')
b=base.index('typedef Array(Item000)',a)
backend='''/* Hooper-style union type witness. Ordinary external growth and reserve;
   tiny helpers are normal static inline functions, not macro bodies. */
typedef struct { void *data; size_t count, capacity; } RawArray;
void raw_reserve(RawArray *a, size_t need, size_t width) {
    if (need <= a->capacity) return;
    if (!width || need > SIZE_MAX / width) abort();
    void *p = realloc(a->data, need * width);
    if (!p) abort();
    a->data = p;
    a->capacity = need;
}
void raw_grow(RawArray *a, size_t width) {
    size_t nc = a->capacity ? a->capacity * 2 : 4;
    if (nc < a->capacity) abort();
    raw_reserve(a, nc, width);
}
#ifndef HOOPER_STATIC_ONLY
#define SMALL_HELPER static inline
#else
#define SMALL_HELPER static
#endif
SMALL_HELPER void raw_push_small(RawArray *a, const void *value, size_t width) {
    if (a->count == a->capacity) raw_grow(a, width);
    memcpy((unsigned char *)a->data + a->count * width, value, width);
    ++a->count;
}
SMALL_HELPER void *raw_at_small(RawArray *a, size_t i, size_t width) {
    if (i >= a->count) abort();
    return (unsigned char *)a->data + i * width;
}
#undef SMALL_HELPER
#define Array(T) union { RawArray raw; T *_element_type; }
#define array_push(a, value) do { \\
    __typeof__(*((a)->_element_type)) tmp = (value); \\
    raw_push_small(&(a)->raw, &tmp, sizeof(tmp)); \\
} while (0)
#define array_at(a,i) ((__typeof__((a)->_element_type))raw_at_small(&(a)->raw, (i), sizeof(*(a)->_element_type)))

'''
(ROOT/'c_hooper_idiomatic_inline.c').write_text(base[:a]+backend+base[b:])
(ROOT/'c_hooper_idiomatic_nohint.c').write_text('#define HOOPER_STATIC_ONLY\n'+base[:a]+backend+base[b:])
print('Generated idiomatic 120-type sources')
