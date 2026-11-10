#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

typedef struct { uint32_t x, y, z, w; } Item000;
typedef struct { uint32_t x, y, z, w; } Item001;
typedef struct { uint32_t x, y, z, w; } Item002;
typedef struct { uint32_t x, y, z, w; } Item003;
typedef struct { uint32_t x, y, z, w; } Item004;
typedef struct { uint32_t x, y, z, w; } Item005;
typedef struct { uint32_t x, y, z, w; } Item006;
typedef struct { uint32_t x, y, z, w; } Item007;
typedef struct { uint32_t x, y, z, w; } Item008;
typedef struct { uint32_t x, y, z, w; } Item009;
typedef struct { uint32_t x, y, z, w; } Item010;
typedef struct { uint32_t x, y, z, w; } Item011;
typedef struct { uint32_t x, y, z, w; } Item012;
typedef struct { uint32_t x, y, z, w; } Item013;
typedef struct { uint32_t x, y, z, w; } Item014;
typedef struct { uint32_t x, y, z, w; } Item015;
typedef struct { uint32_t x, y, z, w; } Item016;
typedef struct { uint32_t x, y, z, w; } Item017;
typedef struct { uint32_t x, y, z, w; } Item018;
typedef struct { uint32_t x, y, z, w; } Item019;
typedef struct { uint32_t x, y, z, w; } Item020;
typedef struct { uint32_t x, y, z, w; } Item021;
typedef struct { uint32_t x, y, z, w; } Item022;
typedef struct { uint32_t x, y, z, w; } Item023;
typedef struct { uint32_t x, y, z, w; } Item024;
typedef struct { uint32_t x, y, z, w; } Item025;
typedef struct { uint32_t x, y, z, w; } Item026;
typedef struct { uint32_t x, y, z, w; } Item027;
typedef struct { uint32_t x, y, z, w; } Item028;
typedef struct { uint32_t x, y, z, w; } Item029;
/* One byte-oriented implementation. The type witness in Array(T) is never accessed. */
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
#define array_push(a, v) do { \
    __typeof__(*((a)->_element_type)) _tmp = (v); \
    raw_push(&(a)->raw, &_tmp, sizeof(_tmp)); \
} while (0)
#define array_at(a, i) ((__typeof__((a)->_element_type)) \
    raw_at(&(a)->raw, (i), sizeof(*(a)->_element_type)))

typedef Array(Item000) Item000Array;
typedef Array(Item001) Item001Array;
typedef Array(Item002) Item002Array;
typedef Array(Item003) Item003Array;
typedef Array(Item004) Item004Array;
typedef Array(Item005) Item005Array;
typedef Array(Item006) Item006Array;
typedef Array(Item007) Item007Array;
typedef Array(Item008) Item008Array;
typedef Array(Item009) Item009Array;
typedef Array(Item010) Item010Array;
typedef Array(Item011) Item011Array;
typedef Array(Item012) Item012Array;
typedef Array(Item013) Item013Array;
typedef Array(Item014) Item014Array;
typedef Array(Item015) Item015Array;
typedef Array(Item016) Item016Array;
typedef Array(Item017) Item017Array;
typedef Array(Item018) Item018Array;
typedef Array(Item019) Item019Array;
typedef Array(Item020) Item020Array;
typedef Array(Item021) Item021Array;
typedef Array(Item022) Item022Array;
typedef Array(Item023) Item023Array;
typedef Array(Item024) Item024Array;
typedef Array(Item025) Item025Array;
typedef Array(Item026) Item026Array;
typedef Array(Item027) Item027Array;
typedef Array(Item028) Item028Array;
typedef Array(Item029) Item029Array;
static uint64_t work_000(size_t limit) {
    Item000Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item000 value = { (uint32_t)(j + 0), (uint32_t)(j * 3 + 0),
                     (uint32_t)(j * 5 + 0), (uint32_t)(j * 7 + 0) };
        array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item000 *p = &(*array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.raw.data);
    return result;
}
static uint64_t work_001(size_t limit) {
    Item001Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item001 value = { (uint32_t)(j + 1), (uint32_t)(j * 3 + 1),
                     (uint32_t)(j * 5 + 1), (uint32_t)(j * 7 + 1) };
        array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item001 *p = &(*array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.raw.data);
    return result;
}
static uint64_t work_002(size_t limit) {
    Item002Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item002 value = { (uint32_t)(j + 2), (uint32_t)(j * 3 + 2),
                     (uint32_t)(j * 5 + 2), (uint32_t)(j * 7 + 2) };
        array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item002 *p = &(*array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.raw.data);
    return result;
}
static uint64_t work_003(size_t limit) {
    Item003Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item003 value = { (uint32_t)(j + 3), (uint32_t)(j * 3 + 3),
                     (uint32_t)(j * 5 + 3), (uint32_t)(j * 7 + 3) };
        array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item003 *p = &(*array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.raw.data);
    return result;
}
static uint64_t work_004(size_t limit) {
    Item004Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item004 value = { (uint32_t)(j + 4), (uint32_t)(j * 3 + 4),
                     (uint32_t)(j * 5 + 4), (uint32_t)(j * 7 + 4) };
        array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item004 *p = &(*array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.raw.data);
    return result;
}
static uint64_t work_005(size_t limit) {
    Item005Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item005 value = { (uint32_t)(j + 5), (uint32_t)(j * 3 + 5),
                     (uint32_t)(j * 5 + 5), (uint32_t)(j * 7 + 5) };
        array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item005 *p = &(*array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.raw.data);
    return result;
}
static uint64_t work_006(size_t limit) {
    Item006Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item006 value = { (uint32_t)(j + 6), (uint32_t)(j * 3 + 6),
                     (uint32_t)(j * 5 + 6), (uint32_t)(j * 7 + 6) };
        array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item006 *p = &(*array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.raw.data);
    return result;
}
static uint64_t work_007(size_t limit) {
    Item007Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item007 value = { (uint32_t)(j + 7), (uint32_t)(j * 3 + 7),
                     (uint32_t)(j * 5 + 7), (uint32_t)(j * 7 + 7) };
        array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item007 *p = &(*array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.raw.data);
    return result;
}
static uint64_t work_008(size_t limit) {
    Item008Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item008 value = { (uint32_t)(j + 8), (uint32_t)(j * 3 + 8),
                     (uint32_t)(j * 5 + 8), (uint32_t)(j * 7 + 8) };
        array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item008 *p = &(*array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.raw.data);
    return result;
}
static uint64_t work_009(size_t limit) {
    Item009Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item009 value = { (uint32_t)(j + 9), (uint32_t)(j * 3 + 9),
                     (uint32_t)(j * 5 + 9), (uint32_t)(j * 7 + 9) };
        array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item009 *p = &(*array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.raw.data);
    return result;
}
static uint64_t work_010(size_t limit) {
    Item010Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item010 value = { (uint32_t)(j + 10), (uint32_t)(j * 3 + 10),
                     (uint32_t)(j * 5 + 10), (uint32_t)(j * 7 + 10) };
        array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item010 *p = &(*array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.raw.data);
    return result;
}
static uint64_t work_011(size_t limit) {
    Item011Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item011 value = { (uint32_t)(j + 11), (uint32_t)(j * 3 + 11),
                     (uint32_t)(j * 5 + 11), (uint32_t)(j * 7 + 11) };
        array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item011 *p = &(*array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.raw.data);
    return result;
}
static uint64_t work_012(size_t limit) {
    Item012Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item012 value = { (uint32_t)(j + 12), (uint32_t)(j * 3 + 12),
                     (uint32_t)(j * 5 + 12), (uint32_t)(j * 7 + 12) };
        array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item012 *p = &(*array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.raw.data);
    return result;
}
static uint64_t work_013(size_t limit) {
    Item013Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item013 value = { (uint32_t)(j + 13), (uint32_t)(j * 3 + 13),
                     (uint32_t)(j * 5 + 13), (uint32_t)(j * 7 + 13) };
        array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item013 *p = &(*array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.raw.data);
    return result;
}
static uint64_t work_014(size_t limit) {
    Item014Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item014 value = { (uint32_t)(j + 14), (uint32_t)(j * 3 + 14),
                     (uint32_t)(j * 5 + 14), (uint32_t)(j * 7 + 14) };
        array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item014 *p = &(*array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.raw.data);
    return result;
}
static uint64_t work_015(size_t limit) {
    Item015Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item015 value = { (uint32_t)(j + 15), (uint32_t)(j * 3 + 15),
                     (uint32_t)(j * 5 + 15), (uint32_t)(j * 7 + 15) };
        array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item015 *p = &(*array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.raw.data);
    return result;
}
static uint64_t work_016(size_t limit) {
    Item016Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item016 value = { (uint32_t)(j + 16), (uint32_t)(j * 3 + 16),
                     (uint32_t)(j * 5 + 16), (uint32_t)(j * 7 + 16) };
        array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item016 *p = &(*array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.raw.data);
    return result;
}
static uint64_t work_017(size_t limit) {
    Item017Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item017 value = { (uint32_t)(j + 17), (uint32_t)(j * 3 + 17),
                     (uint32_t)(j * 5 + 17), (uint32_t)(j * 7 + 17) };
        array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item017 *p = &(*array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.raw.data);
    return result;
}
static uint64_t work_018(size_t limit) {
    Item018Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item018 value = { (uint32_t)(j + 18), (uint32_t)(j * 3 + 18),
                     (uint32_t)(j * 5 + 18), (uint32_t)(j * 7 + 18) };
        array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item018 *p = &(*array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.raw.data);
    return result;
}
static uint64_t work_019(size_t limit) {
    Item019Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item019 value = { (uint32_t)(j + 19), (uint32_t)(j * 3 + 19),
                     (uint32_t)(j * 5 + 19), (uint32_t)(j * 7 + 19) };
        array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item019 *p = &(*array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.raw.data);
    return result;
}
static uint64_t work_020(size_t limit) {
    Item020Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item020 value = { (uint32_t)(j + 20), (uint32_t)(j * 3 + 20),
                     (uint32_t)(j * 5 + 20), (uint32_t)(j * 7 + 20) };
        array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item020 *p = &(*array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.raw.data);
    return result;
}
static uint64_t work_021(size_t limit) {
    Item021Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item021 value = { (uint32_t)(j + 21), (uint32_t)(j * 3 + 21),
                     (uint32_t)(j * 5 + 21), (uint32_t)(j * 7 + 21) };
        array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item021 *p = &(*array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.raw.data);
    return result;
}
static uint64_t work_022(size_t limit) {
    Item022Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item022 value = { (uint32_t)(j + 22), (uint32_t)(j * 3 + 22),
                     (uint32_t)(j * 5 + 22), (uint32_t)(j * 7 + 22) };
        array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item022 *p = &(*array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.raw.data);
    return result;
}
static uint64_t work_023(size_t limit) {
    Item023Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item023 value = { (uint32_t)(j + 23), (uint32_t)(j * 3 + 23),
                     (uint32_t)(j * 5 + 23), (uint32_t)(j * 7 + 23) };
        array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item023 *p = &(*array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.raw.data);
    return result;
}
static uint64_t work_024(size_t limit) {
    Item024Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item024 value = { (uint32_t)(j + 24), (uint32_t)(j * 3 + 24),
                     (uint32_t)(j * 5 + 24), (uint32_t)(j * 7 + 24) };
        array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item024 *p = &(*array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.raw.data);
    return result;
}
static uint64_t work_025(size_t limit) {
    Item025Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item025 value = { (uint32_t)(j + 25), (uint32_t)(j * 3 + 25),
                     (uint32_t)(j * 5 + 25), (uint32_t)(j * 7 + 25) };
        array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item025 *p = &(*array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.raw.data);
    return result;
}
static uint64_t work_026(size_t limit) {
    Item026Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item026 value = { (uint32_t)(j + 26), (uint32_t)(j * 3 + 26),
                     (uint32_t)(j * 5 + 26), (uint32_t)(j * 7 + 26) };
        array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item026 *p = &(*array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.raw.data);
    return result;
}
static uint64_t work_027(size_t limit) {
    Item027Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item027 value = { (uint32_t)(j + 27), (uint32_t)(j * 3 + 27),
                     (uint32_t)(j * 5 + 27), (uint32_t)(j * 7 + 27) };
        array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item027 *p = &(*array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.raw.data);
    return result;
}
static uint64_t work_028(size_t limit) {
    Item028Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item028 value = { (uint32_t)(j + 28), (uint32_t)(j * 3 + 28),
                     (uint32_t)(j * 5 + 28), (uint32_t)(j * 7 + 28) };
        array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item028 *p = &(*array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.raw.data);
    return result;
}
static uint64_t work_029(size_t limit) {
    Item029Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item029 value = { (uint32_t)(j + 29), (uint32_t)(j * 3 + 29),
                     (uint32_t)(j * 5 + 29), (uint32_t)(j * 7 + 29) };
        array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item029 *p = &(*array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.raw.data);
    return result;
}
#include <stdio.h>
int main(int argc, char **argv) {
    (void)argv;
    size_t limit = 17 + ((unsigned)argc % 4);
    uint64_t sum = 0;
    sum += work_000(limit);
    sum += work_001(limit);
    sum += work_002(limit);
    sum += work_003(limit);
    sum += work_004(limit);
    sum += work_005(limit);
    sum += work_006(limit);
    sum += work_007(limit);
    sum += work_008(limit);
    sum += work_009(limit);
    sum += work_010(limit);
    sum += work_011(limit);
    sum += work_012(limit);
    sum += work_013(limit);
    sum += work_014(limit);
    sum += work_015(limit);
    sum += work_016(limit);
    sum += work_017(limit);
    sum += work_018(limit);
    sum += work_019(limit);
    sum += work_020(limit);
    sum += work_021(limit);
    sum += work_022(limit);
    sum += work_023(limit);
    sum += work_024(limit);
    sum += work_025(limit);
    sum += work_026(limit);
    sum += work_027(limit);
    sum += work_028(limit);
    sum += work_029(limit);
    printf("%llu\n", (unsigned long long)sum);
    return 0;
}
