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
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define T Item000
#define NAME Item000Array
#include "../typed_array.inc"
#undef T
#undef NAME
#define T Item001
#define NAME Item001Array
#include "../typed_array.inc"
#undef T
#undef NAME
#define T Item002
#define NAME Item002Array
#include "../typed_array.inc"
#undef T
#undef NAME
#define T Item003
#define NAME Item003Array
#include "../typed_array.inc"
#undef T
#undef NAME
#define T Item004
#define NAME Item004Array
#include "../typed_array.inc"
#undef T
#undef NAME
#define T Item005
#define NAME Item005Array
#include "../typed_array.inc"
#undef T
#undef NAME
#define T Item006
#define NAME Item006Array
#include "../typed_array.inc"
#undef T
#undef NAME
#define T Item007
#define NAME Item007Array
#include "../typed_array.inc"
#undef T
#undef NAME
#define T Item008
#define NAME Item008Array
#include "../typed_array.inc"
#undef T
#undef NAME
#define T Item009
#define NAME Item009Array
#include "../typed_array.inc"
#undef T
#undef NAME
#define T Item010
#define NAME Item010Array
#include "../typed_array.inc"
#undef T
#undef NAME
#define T Item011
#define NAME Item011Array
#include "../typed_array.inc"
#undef T
#undef NAME
#define T Item012
#define NAME Item012Array
#include "../typed_array.inc"
#undef T
#undef NAME
#define T Item013
#define NAME Item013Array
#include "../typed_array.inc"
#undef T
#undef NAME
#define T Item014
#define NAME Item014Array
#include "../typed_array.inc"
#undef T
#undef NAME
#define T Item015
#define NAME Item015Array
#include "../typed_array.inc"
#undef T
#undef NAME
#define T Item016
#define NAME Item016Array
#include "../typed_array.inc"
#undef T
#undef NAME
#define T Item017
#define NAME Item017Array
#include "../typed_array.inc"
#undef T
#undef NAME
#define T Item018
#define NAME Item018Array
#include "../typed_array.inc"
#undef T
#undef NAME
#define T Item019
#define NAME Item019Array
#include "../typed_array.inc"
#undef T
#undef NAME
#define T Item020
#define NAME Item020Array
#include "../typed_array.inc"
#undef T
#undef NAME
#define T Item021
#define NAME Item021Array
#include "../typed_array.inc"
#undef T
#undef NAME
#define T Item022
#define NAME Item022Array
#include "../typed_array.inc"
#undef T
#undef NAME
#define T Item023
#define NAME Item023Array
#include "../typed_array.inc"
#undef T
#undef NAME
#define T Item024
#define NAME Item024Array
#include "../typed_array.inc"
#undef T
#undef NAME
#define T Item025
#define NAME Item025Array
#include "../typed_array.inc"
#undef T
#undef NAME
#define T Item026
#define NAME Item026Array
#include "../typed_array.inc"
#undef T
#undef NAME
#define T Item027
#define NAME Item027Array
#include "../typed_array.inc"
#undef T
#undef NAME
#define T Item028
#define NAME Item028Array
#include "../typed_array.inc"
#undef T
#undef NAME
#define T Item029
#define NAME Item029Array
#include "../typed_array.inc"
#undef T
#undef NAME
static uint64_t work_000(size_t limit) {
    Item000Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item000 value = { (uint32_t)(j + 0), (uint32_t)(j * 3 + 0),
                     (uint32_t)(j * 5 + 0), (uint32_t)(j * 7 + 0) };
        Item000Array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item000 *p = &(*Item000Array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_001(size_t limit) {
    Item001Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item001 value = { (uint32_t)(j + 1), (uint32_t)(j * 3 + 1),
                     (uint32_t)(j * 5 + 1), (uint32_t)(j * 7 + 1) };
        Item001Array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item001 *p = &(*Item001Array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_002(size_t limit) {
    Item002Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item002 value = { (uint32_t)(j + 2), (uint32_t)(j * 3 + 2),
                     (uint32_t)(j * 5 + 2), (uint32_t)(j * 7 + 2) };
        Item002Array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item002 *p = &(*Item002Array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_003(size_t limit) {
    Item003Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item003 value = { (uint32_t)(j + 3), (uint32_t)(j * 3 + 3),
                     (uint32_t)(j * 5 + 3), (uint32_t)(j * 7 + 3) };
        Item003Array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item003 *p = &(*Item003Array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_004(size_t limit) {
    Item004Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item004 value = { (uint32_t)(j + 4), (uint32_t)(j * 3 + 4),
                     (uint32_t)(j * 5 + 4), (uint32_t)(j * 7 + 4) };
        Item004Array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item004 *p = &(*Item004Array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_005(size_t limit) {
    Item005Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item005 value = { (uint32_t)(j + 5), (uint32_t)(j * 3 + 5),
                     (uint32_t)(j * 5 + 5), (uint32_t)(j * 7 + 5) };
        Item005Array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item005 *p = &(*Item005Array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_006(size_t limit) {
    Item006Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item006 value = { (uint32_t)(j + 6), (uint32_t)(j * 3 + 6),
                     (uint32_t)(j * 5 + 6), (uint32_t)(j * 7 + 6) };
        Item006Array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item006 *p = &(*Item006Array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_007(size_t limit) {
    Item007Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item007 value = { (uint32_t)(j + 7), (uint32_t)(j * 3 + 7),
                     (uint32_t)(j * 5 + 7), (uint32_t)(j * 7 + 7) };
        Item007Array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item007 *p = &(*Item007Array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_008(size_t limit) {
    Item008Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item008 value = { (uint32_t)(j + 8), (uint32_t)(j * 3 + 8),
                     (uint32_t)(j * 5 + 8), (uint32_t)(j * 7 + 8) };
        Item008Array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item008 *p = &(*Item008Array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_009(size_t limit) {
    Item009Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item009 value = { (uint32_t)(j + 9), (uint32_t)(j * 3 + 9),
                     (uint32_t)(j * 5 + 9), (uint32_t)(j * 7 + 9) };
        Item009Array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item009 *p = &(*Item009Array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_010(size_t limit) {
    Item010Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item010 value = { (uint32_t)(j + 10), (uint32_t)(j * 3 + 10),
                     (uint32_t)(j * 5 + 10), (uint32_t)(j * 7 + 10) };
        Item010Array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item010 *p = &(*Item010Array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_011(size_t limit) {
    Item011Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item011 value = { (uint32_t)(j + 11), (uint32_t)(j * 3 + 11),
                     (uint32_t)(j * 5 + 11), (uint32_t)(j * 7 + 11) };
        Item011Array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item011 *p = &(*Item011Array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_012(size_t limit) {
    Item012Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item012 value = { (uint32_t)(j + 12), (uint32_t)(j * 3 + 12),
                     (uint32_t)(j * 5 + 12), (uint32_t)(j * 7 + 12) };
        Item012Array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item012 *p = &(*Item012Array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_013(size_t limit) {
    Item013Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item013 value = { (uint32_t)(j + 13), (uint32_t)(j * 3 + 13),
                     (uint32_t)(j * 5 + 13), (uint32_t)(j * 7 + 13) };
        Item013Array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item013 *p = &(*Item013Array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_014(size_t limit) {
    Item014Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item014 value = { (uint32_t)(j + 14), (uint32_t)(j * 3 + 14),
                     (uint32_t)(j * 5 + 14), (uint32_t)(j * 7 + 14) };
        Item014Array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item014 *p = &(*Item014Array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_015(size_t limit) {
    Item015Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item015 value = { (uint32_t)(j + 15), (uint32_t)(j * 3 + 15),
                     (uint32_t)(j * 5 + 15), (uint32_t)(j * 7 + 15) };
        Item015Array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item015 *p = &(*Item015Array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_016(size_t limit) {
    Item016Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item016 value = { (uint32_t)(j + 16), (uint32_t)(j * 3 + 16),
                     (uint32_t)(j * 5 + 16), (uint32_t)(j * 7 + 16) };
        Item016Array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item016 *p = &(*Item016Array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_017(size_t limit) {
    Item017Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item017 value = { (uint32_t)(j + 17), (uint32_t)(j * 3 + 17),
                     (uint32_t)(j * 5 + 17), (uint32_t)(j * 7 + 17) };
        Item017Array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item017 *p = &(*Item017Array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_018(size_t limit) {
    Item018Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item018 value = { (uint32_t)(j + 18), (uint32_t)(j * 3 + 18),
                     (uint32_t)(j * 5 + 18), (uint32_t)(j * 7 + 18) };
        Item018Array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item018 *p = &(*Item018Array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_019(size_t limit) {
    Item019Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item019 value = { (uint32_t)(j + 19), (uint32_t)(j * 3 + 19),
                     (uint32_t)(j * 5 + 19), (uint32_t)(j * 7 + 19) };
        Item019Array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item019 *p = &(*Item019Array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_020(size_t limit) {
    Item020Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item020 value = { (uint32_t)(j + 20), (uint32_t)(j * 3 + 20),
                     (uint32_t)(j * 5 + 20), (uint32_t)(j * 7 + 20) };
        Item020Array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item020 *p = &(*Item020Array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_021(size_t limit) {
    Item021Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item021 value = { (uint32_t)(j + 21), (uint32_t)(j * 3 + 21),
                     (uint32_t)(j * 5 + 21), (uint32_t)(j * 7 + 21) };
        Item021Array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item021 *p = &(*Item021Array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_022(size_t limit) {
    Item022Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item022 value = { (uint32_t)(j + 22), (uint32_t)(j * 3 + 22),
                     (uint32_t)(j * 5 + 22), (uint32_t)(j * 7 + 22) };
        Item022Array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item022 *p = &(*Item022Array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_023(size_t limit) {
    Item023Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item023 value = { (uint32_t)(j + 23), (uint32_t)(j * 3 + 23),
                     (uint32_t)(j * 5 + 23), (uint32_t)(j * 7 + 23) };
        Item023Array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item023 *p = &(*Item023Array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_024(size_t limit) {
    Item024Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item024 value = { (uint32_t)(j + 24), (uint32_t)(j * 3 + 24),
                     (uint32_t)(j * 5 + 24), (uint32_t)(j * 7 + 24) };
        Item024Array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item024 *p = &(*Item024Array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_025(size_t limit) {
    Item025Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item025 value = { (uint32_t)(j + 25), (uint32_t)(j * 3 + 25),
                     (uint32_t)(j * 5 + 25), (uint32_t)(j * 7 + 25) };
        Item025Array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item025 *p = &(*Item025Array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_026(size_t limit) {
    Item026Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item026 value = { (uint32_t)(j + 26), (uint32_t)(j * 3 + 26),
                     (uint32_t)(j * 5 + 26), (uint32_t)(j * 7 + 26) };
        Item026Array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item026 *p = &(*Item026Array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_027(size_t limit) {
    Item027Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item027 value = { (uint32_t)(j + 27), (uint32_t)(j * 3 + 27),
                     (uint32_t)(j * 5 + 27), (uint32_t)(j * 7 + 27) };
        Item027Array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item027 *p = &(*Item027Array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_028(size_t limit) {
    Item028Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item028 value = { (uint32_t)(j + 28), (uint32_t)(j * 3 + 28),
                     (uint32_t)(j * 5 + 28), (uint32_t)(j * 7 + 28) };
        Item028Array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item028 *p = &(*Item028Array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_029(size_t limit) {
    Item029Array array = {0};
    for (size_t j = 0; j < limit; ++j) {
        Item029 value = { (uint32_t)(j + 29), (uint32_t)(j * 3 + 29),
                     (uint32_t)(j * 5 + 29), (uint32_t)(j * 7 + 29) };
        Item029Array_push(&array, value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item029 *p = &(*Item029Array_at(&array, j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
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
