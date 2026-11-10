#include <vector>
#include <algorithm>
#include <unordered_map>
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
typedef struct { uint32_t x, y, z, w; } Item030;
typedef struct { uint32_t x, y, z, w; } Item031;
typedef struct { uint32_t x, y, z, w; } Item032;
typedef struct { uint32_t x, y, z, w; } Item033;
typedef struct { uint32_t x, y, z, w; } Item034;
typedef struct { uint32_t x, y, z, w; } Item035;
typedef struct { uint32_t x, y, z, w; } Item036;
typedef struct { uint32_t x, y, z, w; } Item037;
typedef struct { uint32_t x, y, z, w; } Item038;
typedef struct { uint32_t x, y, z, w; } Item039;
typedef struct { uint32_t x, y, z, w; } Item040;
typedef struct { uint32_t x, y, z, w; } Item041;
typedef struct { uint32_t x, y, z, w; } Item042;
typedef struct { uint32_t x, y, z, w; } Item043;
typedef struct { uint32_t x, y, z, w; } Item044;
typedef struct { uint32_t x, y, z, w; } Item045;
typedef struct { uint32_t x, y, z, w; } Item046;
typedef struct { uint32_t x, y, z, w; } Item047;
typedef struct { uint32_t x, y, z, w; } Item048;
typedef struct { uint32_t x, y, z, w; } Item049;
typedef struct { uint32_t x, y, z, w; } Item050;
typedef struct { uint32_t x, y, z, w; } Item051;
typedef struct { uint32_t x, y, z, w; } Item052;
typedef struct { uint32_t x, y, z, w; } Item053;
typedef struct { uint32_t x, y, z, w; } Item054;
typedef struct { uint32_t x, y, z, w; } Item055;
typedef struct { uint32_t x, y, z, w; } Item056;
typedef struct { uint32_t x, y, z, w; } Item057;
typedef struct { uint32_t x, y, z, w; } Item058;
typedef struct { uint32_t x, y, z, w; } Item059;
typedef struct { uint32_t x, y, z, w; } Item060;
typedef struct { uint32_t x, y, z, w; } Item061;
typedef struct { uint32_t x, y, z, w; } Item062;
typedef struct { uint32_t x, y, z, w; } Item063;
typedef struct { uint32_t x, y, z, w; } Item064;
typedef struct { uint32_t x, y, z, w; } Item065;
typedef struct { uint32_t x, y, z, w; } Item066;
typedef struct { uint32_t x, y, z, w; } Item067;
typedef struct { uint32_t x, y, z, w; } Item068;
typedef struct { uint32_t x, y, z, w; } Item069;
typedef struct { uint32_t x, y, z, w; } Item070;
typedef struct { uint32_t x, y, z, w; } Item071;
typedef struct { uint32_t x, y, z, w; } Item072;
typedef struct { uint32_t x, y, z, w; } Item073;
typedef struct { uint32_t x, y, z, w; } Item074;
typedef struct { uint32_t x, y, z, w; } Item075;
typedef struct { uint32_t x, y, z, w; } Item076;
typedef struct { uint32_t x, y, z, w; } Item077;
typedef struct { uint32_t x, y, z, w; } Item078;
typedef struct { uint32_t x, y, z, w; } Item079;
typedef struct { uint32_t x, y, z, w; } Item080;
typedef struct { uint32_t x, y, z, w; } Item081;
typedef struct { uint32_t x, y, z, w; } Item082;
typedef struct { uint32_t x, y, z, w; } Item083;
typedef struct { uint32_t x, y, z, w; } Item084;
typedef struct { uint32_t x, y, z, w; } Item085;
typedef struct { uint32_t x, y, z, w; } Item086;
typedef struct { uint32_t x, y, z, w; } Item087;
typedef struct { uint32_t x, y, z, w; } Item088;
typedef struct { uint32_t x, y, z, w; } Item089;
typedef struct { uint32_t x, y, z, w; } Item090;
typedef struct { uint32_t x, y, z, w; } Item091;
typedef struct { uint32_t x, y, z, w; } Item092;
typedef struct { uint32_t x, y, z, w; } Item093;
typedef struct { uint32_t x, y, z, w; } Item094;
typedef struct { uint32_t x, y, z, w; } Item095;
typedef struct { uint32_t x, y, z, w; } Item096;
typedef struct { uint32_t x, y, z, w; } Item097;
typedef struct { uint32_t x, y, z, w; } Item098;
typedef struct { uint32_t x, y, z, w; } Item099;
typedef struct { uint32_t x, y, z, w; } Item100;
typedef struct { uint32_t x, y, z, w; } Item101;
typedef struct { uint32_t x, y, z, w; } Item102;
typedef struct { uint32_t x, y, z, w; } Item103;
typedef struct { uint32_t x, y, z, w; } Item104;
typedef struct { uint32_t x, y, z, w; } Item105;
typedef struct { uint32_t x, y, z, w; } Item106;
typedef struct { uint32_t x, y, z, w; } Item107;
typedef struct { uint32_t x, y, z, w; } Item108;
typedef struct { uint32_t x, y, z, w; } Item109;
typedef struct { uint32_t x, y, z, w; } Item110;
typedef struct { uint32_t x, y, z, w; } Item111;
typedef struct { uint32_t x, y, z, w; } Item112;
typedef struct { uint32_t x, y, z, w; } Item113;
typedef struct { uint32_t x, y, z, w; } Item114;
typedef struct { uint32_t x, y, z, w; } Item115;
typedef struct { uint32_t x, y, z, w; } Item116;
typedef struct { uint32_t x, y, z, w; } Item117;
typedef struct { uint32_t x, y, z, w; } Item118;
typedef struct { uint32_t x, y, z, w; } Item119;
typedef struct { uint32_t x, y, z, w; } Item120;
typedef struct { uint32_t x, y, z, w; } Item121;
typedef struct { uint32_t x, y, z, w; } Item122;
typedef struct { uint32_t x, y, z, w; } Item123;
typedef struct { uint32_t x, y, z, w; } Item124;
typedef struct { uint32_t x, y, z, w; } Item125;
typedef struct { uint32_t x, y, z, w; } Item126;
typedef struct { uint32_t x, y, z, w; } Item127;
typedef struct { uint32_t x, y, z, w; } Item128;
typedef struct { uint32_t x, y, z, w; } Item129;
typedef struct { uint32_t x, y, z, w; } Item130;
typedef struct { uint32_t x, y, z, w; } Item131;
typedef struct { uint32_t x, y, z, w; } Item132;
typedef struct { uint32_t x, y, z, w; } Item133;
typedef struct { uint32_t x, y, z, w; } Item134;
typedef struct { uint32_t x, y, z, w; } Item135;
typedef struct { uint32_t x, y, z, w; } Item136;
typedef struct { uint32_t x, y, z, w; } Item137;
typedef struct { uint32_t x, y, z, w; } Item138;
typedef struct { uint32_t x, y, z, w; } Item139;
typedef struct { uint32_t x, y, z, w; } Item140;
typedef struct { uint32_t x, y, z, w; } Item141;
typedef struct { uint32_t x, y, z, w; } Item142;
typedef struct { uint32_t x, y, z, w; } Item143;
typedef struct { uint32_t x, y, z, w; } Item144;
typedef struct { uint32_t x, y, z, w; } Item145;
typedef struct { uint32_t x, y, z, w; } Item146;
typedef struct { uint32_t x, y, z, w; } Item147;
typedef struct { uint32_t x, y, z, w; } Item148;
typedef struct { uint32_t x, y, z, w; } Item149;
typedef struct { uint32_t x, y, z, w; } Item150;
typedef struct { uint32_t x, y, z, w; } Item151;
typedef struct { uint32_t x, y, z, w; } Item152;
typedef struct { uint32_t x, y, z, w; } Item153;
typedef struct { uint32_t x, y, z, w; } Item154;
typedef struct { uint32_t x, y, z, w; } Item155;
typedef struct { uint32_t x, y, z, w; } Item156;
typedef struct { uint32_t x, y, z, w; } Item157;
typedef struct { uint32_t x, y, z, w; } Item158;
typedef struct { uint32_t x, y, z, w; } Item159;
typedef struct { uint32_t x, y, z, w; } Item160;
typedef struct { uint32_t x, y, z, w; } Item161;
typedef struct { uint32_t x, y, z, w; } Item162;
typedef struct { uint32_t x, y, z, w; } Item163;
typedef struct { uint32_t x, y, z, w; } Item164;
typedef struct { uint32_t x, y, z, w; } Item165;
typedef struct { uint32_t x, y, z, w; } Item166;
typedef struct { uint32_t x, y, z, w; } Item167;
typedef struct { uint32_t x, y, z, w; } Item168;
typedef struct { uint32_t x, y, z, w; } Item169;
typedef struct { uint32_t x, y, z, w; } Item170;
typedef struct { uint32_t x, y, z, w; } Item171;
typedef struct { uint32_t x, y, z, w; } Item172;
typedef struct { uint32_t x, y, z, w; } Item173;
typedef struct { uint32_t x, y, z, w; } Item174;
typedef struct { uint32_t x, y, z, w; } Item175;
typedef struct { uint32_t x, y, z, w; } Item176;
typedef struct { uint32_t x, y, z, w; } Item177;
typedef struct { uint32_t x, y, z, w; } Item178;
typedef struct { uint32_t x, y, z, w; } Item179;
typedef struct { uint32_t x, y, z, w; } Item180;
typedef struct { uint32_t x, y, z, w; } Item181;
typedef struct { uint32_t x, y, z, w; } Item182;
typedef struct { uint32_t x, y, z, w; } Item183;
typedef struct { uint32_t x, y, z, w; } Item184;
typedef struct { uint32_t x, y, z, w; } Item185;
typedef struct { uint32_t x, y, z, w; } Item186;
typedef struct { uint32_t x, y, z, w; } Item187;
typedef struct { uint32_t x, y, z, w; } Item188;
typedef struct { uint32_t x, y, z, w; } Item189;
typedef struct { uint32_t x, y, z, w; } Item190;
typedef struct { uint32_t x, y, z, w; } Item191;
typedef struct { uint32_t x, y, z, w; } Item192;
typedef struct { uint32_t x, y, z, w; } Item193;
typedef struct { uint32_t x, y, z, w; } Item194;
typedef struct { uint32_t x, y, z, w; } Item195;
typedef struct { uint32_t x, y, z, w; } Item196;
typedef struct { uint32_t x, y, z, w; } Item197;
typedef struct { uint32_t x, y, z, w; } Item198;
typedef struct { uint32_t x, y, z, w; } Item199;
typedef struct { uint32_t x, y, z, w; } Item200;
typedef struct { uint32_t x, y, z, w; } Item201;
typedef struct { uint32_t x, y, z, w; } Item202;
typedef struct { uint32_t x, y, z, w; } Item203;
typedef struct { uint32_t x, y, z, w; } Item204;
typedef struct { uint32_t x, y, z, w; } Item205;
typedef struct { uint32_t x, y, z, w; } Item206;
typedef struct { uint32_t x, y, z, w; } Item207;
typedef struct { uint32_t x, y, z, w; } Item208;
typedef struct { uint32_t x, y, z, w; } Item209;
typedef struct { uint32_t x, y, z, w; } Item210;
typedef struct { uint32_t x, y, z, w; } Item211;
typedef struct { uint32_t x, y, z, w; } Item212;
typedef struct { uint32_t x, y, z, w; } Item213;
typedef struct { uint32_t x, y, z, w; } Item214;
typedef struct { uint32_t x, y, z, w; } Item215;
typedef struct { uint32_t x, y, z, w; } Item216;
typedef struct { uint32_t x, y, z, w; } Item217;
typedef struct { uint32_t x, y, z, w; } Item218;
typedef struct { uint32_t x, y, z, w; } Item219;
typedef struct { uint32_t x, y, z, w; } Item220;
typedef struct { uint32_t x, y, z, w; } Item221;
typedef struct { uint32_t x, y, z, w; } Item222;
typedef struct { uint32_t x, y, z, w; } Item223;
typedef struct { uint32_t x, y, z, w; } Item224;
typedef struct { uint32_t x, y, z, w; } Item225;
typedef struct { uint32_t x, y, z, w; } Item226;
typedef struct { uint32_t x, y, z, w; } Item227;
typedef struct { uint32_t x, y, z, w; } Item228;
typedef struct { uint32_t x, y, z, w; } Item229;
typedef struct { uint32_t x, y, z, w; } Item230;
typedef struct { uint32_t x, y, z, w; } Item231;
typedef struct { uint32_t x, y, z, w; } Item232;
typedef struct { uint32_t x, y, z, w; } Item233;
typedef struct { uint32_t x, y, z, w; } Item234;
typedef struct { uint32_t x, y, z, w; } Item235;
typedef struct { uint32_t x, y, z, w; } Item236;
typedef struct { uint32_t x, y, z, w; } Item237;
typedef struct { uint32_t x, y, z, w; } Item238;
typedef struct { uint32_t x, y, z, w; } Item239;
template<class T> struct Array {
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

static uint64_t work_000(size_t limit) {
    Array<Item000> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item000 value = { (uint32_t)(j + 0), (uint32_t)(j * 3 + 0),
                     (uint32_t)(j * 5 + 0), (uint32_t)(j * 7 + 0) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item000 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_001(size_t limit) {
    Array<Item001> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item001 value = { (uint32_t)(j + 1), (uint32_t)(j * 3 + 1),
                     (uint32_t)(j * 5 + 1), (uint32_t)(j * 7 + 1) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item001 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_002(size_t limit) {
    Array<Item002> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item002 value = { (uint32_t)(j + 2), (uint32_t)(j * 3 + 2),
                     (uint32_t)(j * 5 + 2), (uint32_t)(j * 7 + 2) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item002 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_003(size_t limit) {
    Array<Item003> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item003 value = { (uint32_t)(j + 3), (uint32_t)(j * 3 + 3),
                     (uint32_t)(j * 5 + 3), (uint32_t)(j * 7 + 3) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item003 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_004(size_t limit) {
    Array<Item004> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item004 value = { (uint32_t)(j + 4), (uint32_t)(j * 3 + 4),
                     (uint32_t)(j * 5 + 4), (uint32_t)(j * 7 + 4) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item004 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_005(size_t limit) {
    Array<Item005> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item005 value = { (uint32_t)(j + 5), (uint32_t)(j * 3 + 5),
                     (uint32_t)(j * 5 + 5), (uint32_t)(j * 7 + 5) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item005 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_006(size_t limit) {
    Array<Item006> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item006 value = { (uint32_t)(j + 6), (uint32_t)(j * 3 + 6),
                     (uint32_t)(j * 5 + 6), (uint32_t)(j * 7 + 6) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item006 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_007(size_t limit) {
    Array<Item007> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item007 value = { (uint32_t)(j + 7), (uint32_t)(j * 3 + 7),
                     (uint32_t)(j * 5 + 7), (uint32_t)(j * 7 + 7) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item007 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_008(size_t limit) {
    Array<Item008> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item008 value = { (uint32_t)(j + 8), (uint32_t)(j * 3 + 8),
                     (uint32_t)(j * 5 + 8), (uint32_t)(j * 7 + 8) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item008 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_009(size_t limit) {
    Array<Item009> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item009 value = { (uint32_t)(j + 9), (uint32_t)(j * 3 + 9),
                     (uint32_t)(j * 5 + 9), (uint32_t)(j * 7 + 9) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item009 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_010(size_t limit) {
    Array<Item010> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item010 value = { (uint32_t)(j + 10), (uint32_t)(j * 3 + 10),
                     (uint32_t)(j * 5 + 10), (uint32_t)(j * 7 + 10) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item010 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_011(size_t limit) {
    Array<Item011> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item011 value = { (uint32_t)(j + 11), (uint32_t)(j * 3 + 11),
                     (uint32_t)(j * 5 + 11), (uint32_t)(j * 7 + 11) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item011 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_012(size_t limit) {
    Array<Item012> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item012 value = { (uint32_t)(j + 12), (uint32_t)(j * 3 + 12),
                     (uint32_t)(j * 5 + 12), (uint32_t)(j * 7 + 12) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item012 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_013(size_t limit) {
    Array<Item013> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item013 value = { (uint32_t)(j + 13), (uint32_t)(j * 3 + 13),
                     (uint32_t)(j * 5 + 13), (uint32_t)(j * 7 + 13) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item013 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_014(size_t limit) {
    Array<Item014> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item014 value = { (uint32_t)(j + 14), (uint32_t)(j * 3 + 14),
                     (uint32_t)(j * 5 + 14), (uint32_t)(j * 7 + 14) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item014 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_015(size_t limit) {
    Array<Item015> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item015 value = { (uint32_t)(j + 15), (uint32_t)(j * 3 + 15),
                     (uint32_t)(j * 5 + 15), (uint32_t)(j * 7 + 15) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item015 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_016(size_t limit) {
    Array<Item016> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item016 value = { (uint32_t)(j + 16), (uint32_t)(j * 3 + 16),
                     (uint32_t)(j * 5 + 16), (uint32_t)(j * 7 + 16) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item016 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_017(size_t limit) {
    Array<Item017> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item017 value = { (uint32_t)(j + 17), (uint32_t)(j * 3 + 17),
                     (uint32_t)(j * 5 + 17), (uint32_t)(j * 7 + 17) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item017 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_018(size_t limit) {
    Array<Item018> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item018 value = { (uint32_t)(j + 18), (uint32_t)(j * 3 + 18),
                     (uint32_t)(j * 5 + 18), (uint32_t)(j * 7 + 18) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item018 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_019(size_t limit) {
    Array<Item019> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item019 value = { (uint32_t)(j + 19), (uint32_t)(j * 3 + 19),
                     (uint32_t)(j * 5 + 19), (uint32_t)(j * 7 + 19) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item019 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_020(size_t limit) {
    Array<Item020> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item020 value = { (uint32_t)(j + 20), (uint32_t)(j * 3 + 20),
                     (uint32_t)(j * 5 + 20), (uint32_t)(j * 7 + 20) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item020 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_021(size_t limit) {
    Array<Item021> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item021 value = { (uint32_t)(j + 21), (uint32_t)(j * 3 + 21),
                     (uint32_t)(j * 5 + 21), (uint32_t)(j * 7 + 21) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item021 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_022(size_t limit) {
    Array<Item022> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item022 value = { (uint32_t)(j + 22), (uint32_t)(j * 3 + 22),
                     (uint32_t)(j * 5 + 22), (uint32_t)(j * 7 + 22) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item022 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_023(size_t limit) {
    Array<Item023> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item023 value = { (uint32_t)(j + 23), (uint32_t)(j * 3 + 23),
                     (uint32_t)(j * 5 + 23), (uint32_t)(j * 7 + 23) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item023 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_024(size_t limit) {
    Array<Item024> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item024 value = { (uint32_t)(j + 24), (uint32_t)(j * 3 + 24),
                     (uint32_t)(j * 5 + 24), (uint32_t)(j * 7 + 24) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item024 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_025(size_t limit) {
    Array<Item025> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item025 value = { (uint32_t)(j + 25), (uint32_t)(j * 3 + 25),
                     (uint32_t)(j * 5 + 25), (uint32_t)(j * 7 + 25) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item025 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_026(size_t limit) {
    Array<Item026> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item026 value = { (uint32_t)(j + 26), (uint32_t)(j * 3 + 26),
                     (uint32_t)(j * 5 + 26), (uint32_t)(j * 7 + 26) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item026 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_027(size_t limit) {
    Array<Item027> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item027 value = { (uint32_t)(j + 27), (uint32_t)(j * 3 + 27),
                     (uint32_t)(j * 5 + 27), (uint32_t)(j * 7 + 27) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item027 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_028(size_t limit) {
    Array<Item028> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item028 value = { (uint32_t)(j + 28), (uint32_t)(j * 3 + 28),
                     (uint32_t)(j * 5 + 28), (uint32_t)(j * 7 + 28) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item028 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_029(size_t limit) {
    Array<Item029> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item029 value = { (uint32_t)(j + 29), (uint32_t)(j * 3 + 29),
                     (uint32_t)(j * 5 + 29), (uint32_t)(j * 7 + 29) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item029 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_030(size_t limit) {
    Array<Item030> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item030 value = { (uint32_t)(j + 30), (uint32_t)(j * 3 + 30),
                     (uint32_t)(j * 5 + 30), (uint32_t)(j * 7 + 30) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item030 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_031(size_t limit) {
    Array<Item031> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item031 value = { (uint32_t)(j + 31), (uint32_t)(j * 3 + 31),
                     (uint32_t)(j * 5 + 31), (uint32_t)(j * 7 + 31) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item031 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_032(size_t limit) {
    Array<Item032> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item032 value = { (uint32_t)(j + 32), (uint32_t)(j * 3 + 32),
                     (uint32_t)(j * 5 + 32), (uint32_t)(j * 7 + 32) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item032 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_033(size_t limit) {
    Array<Item033> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item033 value = { (uint32_t)(j + 33), (uint32_t)(j * 3 + 33),
                     (uint32_t)(j * 5 + 33), (uint32_t)(j * 7 + 33) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item033 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_034(size_t limit) {
    Array<Item034> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item034 value = { (uint32_t)(j + 34), (uint32_t)(j * 3 + 34),
                     (uint32_t)(j * 5 + 34), (uint32_t)(j * 7 + 34) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item034 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_035(size_t limit) {
    Array<Item035> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item035 value = { (uint32_t)(j + 35), (uint32_t)(j * 3 + 35),
                     (uint32_t)(j * 5 + 35), (uint32_t)(j * 7 + 35) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item035 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_036(size_t limit) {
    Array<Item036> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item036 value = { (uint32_t)(j + 36), (uint32_t)(j * 3 + 36),
                     (uint32_t)(j * 5 + 36), (uint32_t)(j * 7 + 36) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item036 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_037(size_t limit) {
    Array<Item037> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item037 value = { (uint32_t)(j + 37), (uint32_t)(j * 3 + 37),
                     (uint32_t)(j * 5 + 37), (uint32_t)(j * 7 + 37) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item037 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_038(size_t limit) {
    Array<Item038> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item038 value = { (uint32_t)(j + 38), (uint32_t)(j * 3 + 38),
                     (uint32_t)(j * 5 + 38), (uint32_t)(j * 7 + 38) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item038 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_039(size_t limit) {
    Array<Item039> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item039 value = { (uint32_t)(j + 39), (uint32_t)(j * 3 + 39),
                     (uint32_t)(j * 5 + 39), (uint32_t)(j * 7 + 39) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item039 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_040(size_t limit) {
    Array<Item040> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item040 value = { (uint32_t)(j + 40), (uint32_t)(j * 3 + 40),
                     (uint32_t)(j * 5 + 40), (uint32_t)(j * 7 + 40) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item040 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_041(size_t limit) {
    Array<Item041> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item041 value = { (uint32_t)(j + 41), (uint32_t)(j * 3 + 41),
                     (uint32_t)(j * 5 + 41), (uint32_t)(j * 7 + 41) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item041 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_042(size_t limit) {
    Array<Item042> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item042 value = { (uint32_t)(j + 42), (uint32_t)(j * 3 + 42),
                     (uint32_t)(j * 5 + 42), (uint32_t)(j * 7 + 42) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item042 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_043(size_t limit) {
    Array<Item043> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item043 value = { (uint32_t)(j + 43), (uint32_t)(j * 3 + 43),
                     (uint32_t)(j * 5 + 43), (uint32_t)(j * 7 + 43) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item043 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_044(size_t limit) {
    Array<Item044> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item044 value = { (uint32_t)(j + 44), (uint32_t)(j * 3 + 44),
                     (uint32_t)(j * 5 + 44), (uint32_t)(j * 7 + 44) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item044 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_045(size_t limit) {
    Array<Item045> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item045 value = { (uint32_t)(j + 45), (uint32_t)(j * 3 + 45),
                     (uint32_t)(j * 5 + 45), (uint32_t)(j * 7 + 45) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item045 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_046(size_t limit) {
    Array<Item046> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item046 value = { (uint32_t)(j + 46), (uint32_t)(j * 3 + 46),
                     (uint32_t)(j * 5 + 46), (uint32_t)(j * 7 + 46) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item046 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_047(size_t limit) {
    Array<Item047> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item047 value = { (uint32_t)(j + 47), (uint32_t)(j * 3 + 47),
                     (uint32_t)(j * 5 + 47), (uint32_t)(j * 7 + 47) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item047 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_048(size_t limit) {
    Array<Item048> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item048 value = { (uint32_t)(j + 48), (uint32_t)(j * 3 + 48),
                     (uint32_t)(j * 5 + 48), (uint32_t)(j * 7 + 48) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item048 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_049(size_t limit) {
    Array<Item049> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item049 value = { (uint32_t)(j + 49), (uint32_t)(j * 3 + 49),
                     (uint32_t)(j * 5 + 49), (uint32_t)(j * 7 + 49) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item049 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_050(size_t limit) {
    Array<Item050> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item050 value = { (uint32_t)(j + 50), (uint32_t)(j * 3 + 50),
                     (uint32_t)(j * 5 + 50), (uint32_t)(j * 7 + 50) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item050 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_051(size_t limit) {
    Array<Item051> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item051 value = { (uint32_t)(j + 51), (uint32_t)(j * 3 + 51),
                     (uint32_t)(j * 5 + 51), (uint32_t)(j * 7 + 51) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item051 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_052(size_t limit) {
    Array<Item052> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item052 value = { (uint32_t)(j + 52), (uint32_t)(j * 3 + 52),
                     (uint32_t)(j * 5 + 52), (uint32_t)(j * 7 + 52) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item052 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_053(size_t limit) {
    Array<Item053> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item053 value = { (uint32_t)(j + 53), (uint32_t)(j * 3 + 53),
                     (uint32_t)(j * 5 + 53), (uint32_t)(j * 7 + 53) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item053 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_054(size_t limit) {
    Array<Item054> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item054 value = { (uint32_t)(j + 54), (uint32_t)(j * 3 + 54),
                     (uint32_t)(j * 5 + 54), (uint32_t)(j * 7 + 54) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item054 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_055(size_t limit) {
    Array<Item055> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item055 value = { (uint32_t)(j + 55), (uint32_t)(j * 3 + 55),
                     (uint32_t)(j * 5 + 55), (uint32_t)(j * 7 + 55) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item055 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_056(size_t limit) {
    Array<Item056> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item056 value = { (uint32_t)(j + 56), (uint32_t)(j * 3 + 56),
                     (uint32_t)(j * 5 + 56), (uint32_t)(j * 7 + 56) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item056 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_057(size_t limit) {
    Array<Item057> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item057 value = { (uint32_t)(j + 57), (uint32_t)(j * 3 + 57),
                     (uint32_t)(j * 5 + 57), (uint32_t)(j * 7 + 57) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item057 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_058(size_t limit) {
    Array<Item058> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item058 value = { (uint32_t)(j + 58), (uint32_t)(j * 3 + 58),
                     (uint32_t)(j * 5 + 58), (uint32_t)(j * 7 + 58) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item058 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_059(size_t limit) {
    Array<Item059> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item059 value = { (uint32_t)(j + 59), (uint32_t)(j * 3 + 59),
                     (uint32_t)(j * 5 + 59), (uint32_t)(j * 7 + 59) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item059 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_060(size_t limit) {
    Array<Item060> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item060 value = { (uint32_t)(j + 60), (uint32_t)(j * 3 + 60),
                     (uint32_t)(j * 5 + 60), (uint32_t)(j * 7 + 60) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item060 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_061(size_t limit) {
    Array<Item061> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item061 value = { (uint32_t)(j + 61), (uint32_t)(j * 3 + 61),
                     (uint32_t)(j * 5 + 61), (uint32_t)(j * 7 + 61) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item061 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_062(size_t limit) {
    Array<Item062> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item062 value = { (uint32_t)(j + 62), (uint32_t)(j * 3 + 62),
                     (uint32_t)(j * 5 + 62), (uint32_t)(j * 7 + 62) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item062 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_063(size_t limit) {
    Array<Item063> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item063 value = { (uint32_t)(j + 63), (uint32_t)(j * 3 + 63),
                     (uint32_t)(j * 5 + 63), (uint32_t)(j * 7 + 63) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item063 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_064(size_t limit) {
    Array<Item064> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item064 value = { (uint32_t)(j + 64), (uint32_t)(j * 3 + 64),
                     (uint32_t)(j * 5 + 64), (uint32_t)(j * 7 + 64) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item064 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_065(size_t limit) {
    Array<Item065> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item065 value = { (uint32_t)(j + 65), (uint32_t)(j * 3 + 65),
                     (uint32_t)(j * 5 + 65), (uint32_t)(j * 7 + 65) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item065 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_066(size_t limit) {
    Array<Item066> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item066 value = { (uint32_t)(j + 66), (uint32_t)(j * 3 + 66),
                     (uint32_t)(j * 5 + 66), (uint32_t)(j * 7 + 66) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item066 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_067(size_t limit) {
    Array<Item067> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item067 value = { (uint32_t)(j + 67), (uint32_t)(j * 3 + 67),
                     (uint32_t)(j * 5 + 67), (uint32_t)(j * 7 + 67) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item067 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_068(size_t limit) {
    Array<Item068> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item068 value = { (uint32_t)(j + 68), (uint32_t)(j * 3 + 68),
                     (uint32_t)(j * 5 + 68), (uint32_t)(j * 7 + 68) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item068 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_069(size_t limit) {
    Array<Item069> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item069 value = { (uint32_t)(j + 69), (uint32_t)(j * 3 + 69),
                     (uint32_t)(j * 5 + 69), (uint32_t)(j * 7 + 69) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item069 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_070(size_t limit) {
    Array<Item070> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item070 value = { (uint32_t)(j + 70), (uint32_t)(j * 3 + 70),
                     (uint32_t)(j * 5 + 70), (uint32_t)(j * 7 + 70) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item070 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_071(size_t limit) {
    Array<Item071> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item071 value = { (uint32_t)(j + 71), (uint32_t)(j * 3 + 71),
                     (uint32_t)(j * 5 + 71), (uint32_t)(j * 7 + 71) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item071 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_072(size_t limit) {
    Array<Item072> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item072 value = { (uint32_t)(j + 72), (uint32_t)(j * 3 + 72),
                     (uint32_t)(j * 5 + 72), (uint32_t)(j * 7 + 72) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item072 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_073(size_t limit) {
    Array<Item073> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item073 value = { (uint32_t)(j + 73), (uint32_t)(j * 3 + 73),
                     (uint32_t)(j * 5 + 73), (uint32_t)(j * 7 + 73) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item073 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_074(size_t limit) {
    Array<Item074> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item074 value = { (uint32_t)(j + 74), (uint32_t)(j * 3 + 74),
                     (uint32_t)(j * 5 + 74), (uint32_t)(j * 7 + 74) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item074 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_075(size_t limit) {
    Array<Item075> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item075 value = { (uint32_t)(j + 75), (uint32_t)(j * 3 + 75),
                     (uint32_t)(j * 5 + 75), (uint32_t)(j * 7 + 75) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item075 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_076(size_t limit) {
    Array<Item076> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item076 value = { (uint32_t)(j + 76), (uint32_t)(j * 3 + 76),
                     (uint32_t)(j * 5 + 76), (uint32_t)(j * 7 + 76) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item076 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_077(size_t limit) {
    Array<Item077> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item077 value = { (uint32_t)(j + 77), (uint32_t)(j * 3 + 77),
                     (uint32_t)(j * 5 + 77), (uint32_t)(j * 7 + 77) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item077 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_078(size_t limit) {
    Array<Item078> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item078 value = { (uint32_t)(j + 78), (uint32_t)(j * 3 + 78),
                     (uint32_t)(j * 5 + 78), (uint32_t)(j * 7 + 78) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item078 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_079(size_t limit) {
    Array<Item079> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item079 value = { (uint32_t)(j + 79), (uint32_t)(j * 3 + 79),
                     (uint32_t)(j * 5 + 79), (uint32_t)(j * 7 + 79) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item079 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_080(size_t limit) {
    Array<Item080> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item080 value = { (uint32_t)(j + 80), (uint32_t)(j * 3 + 80),
                     (uint32_t)(j * 5 + 80), (uint32_t)(j * 7 + 80) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item080 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_081(size_t limit) {
    Array<Item081> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item081 value = { (uint32_t)(j + 81), (uint32_t)(j * 3 + 81),
                     (uint32_t)(j * 5 + 81), (uint32_t)(j * 7 + 81) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item081 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_082(size_t limit) {
    Array<Item082> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item082 value = { (uint32_t)(j + 82), (uint32_t)(j * 3 + 82),
                     (uint32_t)(j * 5 + 82), (uint32_t)(j * 7 + 82) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item082 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_083(size_t limit) {
    Array<Item083> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item083 value = { (uint32_t)(j + 83), (uint32_t)(j * 3 + 83),
                     (uint32_t)(j * 5 + 83), (uint32_t)(j * 7 + 83) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item083 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_084(size_t limit) {
    Array<Item084> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item084 value = { (uint32_t)(j + 84), (uint32_t)(j * 3 + 84),
                     (uint32_t)(j * 5 + 84), (uint32_t)(j * 7 + 84) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item084 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_085(size_t limit) {
    Array<Item085> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item085 value = { (uint32_t)(j + 85), (uint32_t)(j * 3 + 85),
                     (uint32_t)(j * 5 + 85), (uint32_t)(j * 7 + 85) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item085 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_086(size_t limit) {
    Array<Item086> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item086 value = { (uint32_t)(j + 86), (uint32_t)(j * 3 + 86),
                     (uint32_t)(j * 5 + 86), (uint32_t)(j * 7 + 86) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item086 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_087(size_t limit) {
    Array<Item087> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item087 value = { (uint32_t)(j + 87), (uint32_t)(j * 3 + 87),
                     (uint32_t)(j * 5 + 87), (uint32_t)(j * 7 + 87) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item087 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_088(size_t limit) {
    Array<Item088> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item088 value = { (uint32_t)(j + 88), (uint32_t)(j * 3 + 88),
                     (uint32_t)(j * 5 + 88), (uint32_t)(j * 7 + 88) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item088 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_089(size_t limit) {
    Array<Item089> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item089 value = { (uint32_t)(j + 89), (uint32_t)(j * 3 + 89),
                     (uint32_t)(j * 5 + 89), (uint32_t)(j * 7 + 89) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item089 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_090(size_t limit) {
    Array<Item090> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item090 value = { (uint32_t)(j + 90), (uint32_t)(j * 3 + 90),
                     (uint32_t)(j * 5 + 90), (uint32_t)(j * 7 + 90) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item090 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_091(size_t limit) {
    Array<Item091> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item091 value = { (uint32_t)(j + 91), (uint32_t)(j * 3 + 91),
                     (uint32_t)(j * 5 + 91), (uint32_t)(j * 7 + 91) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item091 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_092(size_t limit) {
    Array<Item092> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item092 value = { (uint32_t)(j + 92), (uint32_t)(j * 3 + 92),
                     (uint32_t)(j * 5 + 92), (uint32_t)(j * 7 + 92) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item092 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_093(size_t limit) {
    Array<Item093> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item093 value = { (uint32_t)(j + 93), (uint32_t)(j * 3 + 93),
                     (uint32_t)(j * 5 + 93), (uint32_t)(j * 7 + 93) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item093 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_094(size_t limit) {
    Array<Item094> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item094 value = { (uint32_t)(j + 94), (uint32_t)(j * 3 + 94),
                     (uint32_t)(j * 5 + 94), (uint32_t)(j * 7 + 94) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item094 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_095(size_t limit) {
    Array<Item095> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item095 value = { (uint32_t)(j + 95), (uint32_t)(j * 3 + 95),
                     (uint32_t)(j * 5 + 95), (uint32_t)(j * 7 + 95) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item095 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_096(size_t limit) {
    Array<Item096> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item096 value = { (uint32_t)(j + 96), (uint32_t)(j * 3 + 96),
                     (uint32_t)(j * 5 + 96), (uint32_t)(j * 7 + 96) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item096 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_097(size_t limit) {
    Array<Item097> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item097 value = { (uint32_t)(j + 97), (uint32_t)(j * 3 + 97),
                     (uint32_t)(j * 5 + 97), (uint32_t)(j * 7 + 97) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item097 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_098(size_t limit) {
    Array<Item098> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item098 value = { (uint32_t)(j + 98), (uint32_t)(j * 3 + 98),
                     (uint32_t)(j * 5 + 98), (uint32_t)(j * 7 + 98) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item098 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_099(size_t limit) {
    Array<Item099> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item099 value = { (uint32_t)(j + 99), (uint32_t)(j * 3 + 99),
                     (uint32_t)(j * 5 + 99), (uint32_t)(j * 7 + 99) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item099 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_100(size_t limit) {
    Array<Item100> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item100 value = { (uint32_t)(j + 100), (uint32_t)(j * 3 + 100),
                     (uint32_t)(j * 5 + 100), (uint32_t)(j * 7 + 100) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item100 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_101(size_t limit) {
    Array<Item101> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item101 value = { (uint32_t)(j + 101), (uint32_t)(j * 3 + 101),
                     (uint32_t)(j * 5 + 101), (uint32_t)(j * 7 + 101) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item101 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_102(size_t limit) {
    Array<Item102> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item102 value = { (uint32_t)(j + 102), (uint32_t)(j * 3 + 102),
                     (uint32_t)(j * 5 + 102), (uint32_t)(j * 7 + 102) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item102 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_103(size_t limit) {
    Array<Item103> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item103 value = { (uint32_t)(j + 103), (uint32_t)(j * 3 + 103),
                     (uint32_t)(j * 5 + 103), (uint32_t)(j * 7 + 103) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item103 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_104(size_t limit) {
    Array<Item104> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item104 value = { (uint32_t)(j + 104), (uint32_t)(j * 3 + 104),
                     (uint32_t)(j * 5 + 104), (uint32_t)(j * 7 + 104) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item104 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_105(size_t limit) {
    Array<Item105> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item105 value = { (uint32_t)(j + 105), (uint32_t)(j * 3 + 105),
                     (uint32_t)(j * 5 + 105), (uint32_t)(j * 7 + 105) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item105 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_106(size_t limit) {
    Array<Item106> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item106 value = { (uint32_t)(j + 106), (uint32_t)(j * 3 + 106),
                     (uint32_t)(j * 5 + 106), (uint32_t)(j * 7 + 106) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item106 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_107(size_t limit) {
    Array<Item107> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item107 value = { (uint32_t)(j + 107), (uint32_t)(j * 3 + 107),
                     (uint32_t)(j * 5 + 107), (uint32_t)(j * 7 + 107) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item107 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_108(size_t limit) {
    Array<Item108> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item108 value = { (uint32_t)(j + 108), (uint32_t)(j * 3 + 108),
                     (uint32_t)(j * 5 + 108), (uint32_t)(j * 7 + 108) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item108 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_109(size_t limit) {
    Array<Item109> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item109 value = { (uint32_t)(j + 109), (uint32_t)(j * 3 + 109),
                     (uint32_t)(j * 5 + 109), (uint32_t)(j * 7 + 109) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item109 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_110(size_t limit) {
    Array<Item110> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item110 value = { (uint32_t)(j + 110), (uint32_t)(j * 3 + 110),
                     (uint32_t)(j * 5 + 110), (uint32_t)(j * 7 + 110) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item110 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_111(size_t limit) {
    Array<Item111> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item111 value = { (uint32_t)(j + 111), (uint32_t)(j * 3 + 111),
                     (uint32_t)(j * 5 + 111), (uint32_t)(j * 7 + 111) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item111 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_112(size_t limit) {
    Array<Item112> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item112 value = { (uint32_t)(j + 112), (uint32_t)(j * 3 + 112),
                     (uint32_t)(j * 5 + 112), (uint32_t)(j * 7 + 112) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item112 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_113(size_t limit) {
    Array<Item113> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item113 value = { (uint32_t)(j + 113), (uint32_t)(j * 3 + 113),
                     (uint32_t)(j * 5 + 113), (uint32_t)(j * 7 + 113) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item113 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_114(size_t limit) {
    Array<Item114> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item114 value = { (uint32_t)(j + 114), (uint32_t)(j * 3 + 114),
                     (uint32_t)(j * 5 + 114), (uint32_t)(j * 7 + 114) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item114 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_115(size_t limit) {
    Array<Item115> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item115 value = { (uint32_t)(j + 115), (uint32_t)(j * 3 + 115),
                     (uint32_t)(j * 5 + 115), (uint32_t)(j * 7 + 115) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item115 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_116(size_t limit) {
    Array<Item116> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item116 value = { (uint32_t)(j + 116), (uint32_t)(j * 3 + 116),
                     (uint32_t)(j * 5 + 116), (uint32_t)(j * 7 + 116) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item116 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_117(size_t limit) {
    Array<Item117> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item117 value = { (uint32_t)(j + 117), (uint32_t)(j * 3 + 117),
                     (uint32_t)(j * 5 + 117), (uint32_t)(j * 7 + 117) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item117 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_118(size_t limit) {
    Array<Item118> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item118 value = { (uint32_t)(j + 118), (uint32_t)(j * 3 + 118),
                     (uint32_t)(j * 5 + 118), (uint32_t)(j * 7 + 118) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item118 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_119(size_t limit) {
    Array<Item119> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item119 value = { (uint32_t)(j + 119), (uint32_t)(j * 3 + 119),
                     (uint32_t)(j * 5 + 119), (uint32_t)(j * 7 + 119) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item119 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_120(size_t limit) {
    Array<Item120> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item120 value = { (uint32_t)(j + 120), (uint32_t)(j * 3 + 120),
                     (uint32_t)(j * 5 + 120), (uint32_t)(j * 7 + 120) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item120 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_121(size_t limit) {
    Array<Item121> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item121 value = { (uint32_t)(j + 121), (uint32_t)(j * 3 + 121),
                     (uint32_t)(j * 5 + 121), (uint32_t)(j * 7 + 121) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item121 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_122(size_t limit) {
    Array<Item122> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item122 value = { (uint32_t)(j + 122), (uint32_t)(j * 3 + 122),
                     (uint32_t)(j * 5 + 122), (uint32_t)(j * 7 + 122) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item122 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_123(size_t limit) {
    Array<Item123> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item123 value = { (uint32_t)(j + 123), (uint32_t)(j * 3 + 123),
                     (uint32_t)(j * 5 + 123), (uint32_t)(j * 7 + 123) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item123 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_124(size_t limit) {
    Array<Item124> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item124 value = { (uint32_t)(j + 124), (uint32_t)(j * 3 + 124),
                     (uint32_t)(j * 5 + 124), (uint32_t)(j * 7 + 124) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item124 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_125(size_t limit) {
    Array<Item125> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item125 value = { (uint32_t)(j + 125), (uint32_t)(j * 3 + 125),
                     (uint32_t)(j * 5 + 125), (uint32_t)(j * 7 + 125) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item125 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_126(size_t limit) {
    Array<Item126> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item126 value = { (uint32_t)(j + 126), (uint32_t)(j * 3 + 126),
                     (uint32_t)(j * 5 + 126), (uint32_t)(j * 7 + 126) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item126 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_127(size_t limit) {
    Array<Item127> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item127 value = { (uint32_t)(j + 127), (uint32_t)(j * 3 + 127),
                     (uint32_t)(j * 5 + 127), (uint32_t)(j * 7 + 127) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item127 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_128(size_t limit) {
    Array<Item128> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item128 value = { (uint32_t)(j + 128), (uint32_t)(j * 3 + 128),
                     (uint32_t)(j * 5 + 128), (uint32_t)(j * 7 + 128) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item128 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_129(size_t limit) {
    Array<Item129> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item129 value = { (uint32_t)(j + 129), (uint32_t)(j * 3 + 129),
                     (uint32_t)(j * 5 + 129), (uint32_t)(j * 7 + 129) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item129 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_130(size_t limit) {
    Array<Item130> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item130 value = { (uint32_t)(j + 130), (uint32_t)(j * 3 + 130),
                     (uint32_t)(j * 5 + 130), (uint32_t)(j * 7 + 130) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item130 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_131(size_t limit) {
    Array<Item131> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item131 value = { (uint32_t)(j + 131), (uint32_t)(j * 3 + 131),
                     (uint32_t)(j * 5 + 131), (uint32_t)(j * 7 + 131) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item131 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_132(size_t limit) {
    Array<Item132> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item132 value = { (uint32_t)(j + 132), (uint32_t)(j * 3 + 132),
                     (uint32_t)(j * 5 + 132), (uint32_t)(j * 7 + 132) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item132 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_133(size_t limit) {
    Array<Item133> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item133 value = { (uint32_t)(j + 133), (uint32_t)(j * 3 + 133),
                     (uint32_t)(j * 5 + 133), (uint32_t)(j * 7 + 133) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item133 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_134(size_t limit) {
    Array<Item134> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item134 value = { (uint32_t)(j + 134), (uint32_t)(j * 3 + 134),
                     (uint32_t)(j * 5 + 134), (uint32_t)(j * 7 + 134) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item134 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_135(size_t limit) {
    Array<Item135> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item135 value = { (uint32_t)(j + 135), (uint32_t)(j * 3 + 135),
                     (uint32_t)(j * 5 + 135), (uint32_t)(j * 7 + 135) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item135 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_136(size_t limit) {
    Array<Item136> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item136 value = { (uint32_t)(j + 136), (uint32_t)(j * 3 + 136),
                     (uint32_t)(j * 5 + 136), (uint32_t)(j * 7 + 136) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item136 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_137(size_t limit) {
    Array<Item137> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item137 value = { (uint32_t)(j + 137), (uint32_t)(j * 3 + 137),
                     (uint32_t)(j * 5 + 137), (uint32_t)(j * 7 + 137) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item137 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_138(size_t limit) {
    Array<Item138> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item138 value = { (uint32_t)(j + 138), (uint32_t)(j * 3 + 138),
                     (uint32_t)(j * 5 + 138), (uint32_t)(j * 7 + 138) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item138 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_139(size_t limit) {
    Array<Item139> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item139 value = { (uint32_t)(j + 139), (uint32_t)(j * 3 + 139),
                     (uint32_t)(j * 5 + 139), (uint32_t)(j * 7 + 139) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item139 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_140(size_t limit) {
    Array<Item140> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item140 value = { (uint32_t)(j + 140), (uint32_t)(j * 3 + 140),
                     (uint32_t)(j * 5 + 140), (uint32_t)(j * 7 + 140) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item140 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_141(size_t limit) {
    Array<Item141> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item141 value = { (uint32_t)(j + 141), (uint32_t)(j * 3 + 141),
                     (uint32_t)(j * 5 + 141), (uint32_t)(j * 7 + 141) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item141 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_142(size_t limit) {
    Array<Item142> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item142 value = { (uint32_t)(j + 142), (uint32_t)(j * 3 + 142),
                     (uint32_t)(j * 5 + 142), (uint32_t)(j * 7 + 142) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item142 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_143(size_t limit) {
    Array<Item143> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item143 value = { (uint32_t)(j + 143), (uint32_t)(j * 3 + 143),
                     (uint32_t)(j * 5 + 143), (uint32_t)(j * 7 + 143) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item143 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_144(size_t limit) {
    Array<Item144> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item144 value = { (uint32_t)(j + 144), (uint32_t)(j * 3 + 144),
                     (uint32_t)(j * 5 + 144), (uint32_t)(j * 7 + 144) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item144 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_145(size_t limit) {
    Array<Item145> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item145 value = { (uint32_t)(j + 145), (uint32_t)(j * 3 + 145),
                     (uint32_t)(j * 5 + 145), (uint32_t)(j * 7 + 145) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item145 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_146(size_t limit) {
    Array<Item146> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item146 value = { (uint32_t)(j + 146), (uint32_t)(j * 3 + 146),
                     (uint32_t)(j * 5 + 146), (uint32_t)(j * 7 + 146) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item146 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_147(size_t limit) {
    Array<Item147> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item147 value = { (uint32_t)(j + 147), (uint32_t)(j * 3 + 147),
                     (uint32_t)(j * 5 + 147), (uint32_t)(j * 7 + 147) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item147 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_148(size_t limit) {
    Array<Item148> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item148 value = { (uint32_t)(j + 148), (uint32_t)(j * 3 + 148),
                     (uint32_t)(j * 5 + 148), (uint32_t)(j * 7 + 148) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item148 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_149(size_t limit) {
    Array<Item149> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item149 value = { (uint32_t)(j + 149), (uint32_t)(j * 3 + 149),
                     (uint32_t)(j * 5 + 149), (uint32_t)(j * 7 + 149) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item149 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_150(size_t limit) {
    Array<Item150> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item150 value = { (uint32_t)(j + 150), (uint32_t)(j * 3 + 150),
                     (uint32_t)(j * 5 + 150), (uint32_t)(j * 7 + 150) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item150 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_151(size_t limit) {
    Array<Item151> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item151 value = { (uint32_t)(j + 151), (uint32_t)(j * 3 + 151),
                     (uint32_t)(j * 5 + 151), (uint32_t)(j * 7 + 151) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item151 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_152(size_t limit) {
    Array<Item152> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item152 value = { (uint32_t)(j + 152), (uint32_t)(j * 3 + 152),
                     (uint32_t)(j * 5 + 152), (uint32_t)(j * 7 + 152) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item152 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_153(size_t limit) {
    Array<Item153> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item153 value = { (uint32_t)(j + 153), (uint32_t)(j * 3 + 153),
                     (uint32_t)(j * 5 + 153), (uint32_t)(j * 7 + 153) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item153 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_154(size_t limit) {
    Array<Item154> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item154 value = { (uint32_t)(j + 154), (uint32_t)(j * 3 + 154),
                     (uint32_t)(j * 5 + 154), (uint32_t)(j * 7 + 154) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item154 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_155(size_t limit) {
    Array<Item155> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item155 value = { (uint32_t)(j + 155), (uint32_t)(j * 3 + 155),
                     (uint32_t)(j * 5 + 155), (uint32_t)(j * 7 + 155) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item155 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_156(size_t limit) {
    Array<Item156> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item156 value = { (uint32_t)(j + 156), (uint32_t)(j * 3 + 156),
                     (uint32_t)(j * 5 + 156), (uint32_t)(j * 7 + 156) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item156 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_157(size_t limit) {
    Array<Item157> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item157 value = { (uint32_t)(j + 157), (uint32_t)(j * 3 + 157),
                     (uint32_t)(j * 5 + 157), (uint32_t)(j * 7 + 157) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item157 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_158(size_t limit) {
    Array<Item158> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item158 value = { (uint32_t)(j + 158), (uint32_t)(j * 3 + 158),
                     (uint32_t)(j * 5 + 158), (uint32_t)(j * 7 + 158) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item158 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_159(size_t limit) {
    Array<Item159> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item159 value = { (uint32_t)(j + 159), (uint32_t)(j * 3 + 159),
                     (uint32_t)(j * 5 + 159), (uint32_t)(j * 7 + 159) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item159 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_160(size_t limit) {
    Array<Item160> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item160 value = { (uint32_t)(j + 160), (uint32_t)(j * 3 + 160),
                     (uint32_t)(j * 5 + 160), (uint32_t)(j * 7 + 160) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item160 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_161(size_t limit) {
    Array<Item161> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item161 value = { (uint32_t)(j + 161), (uint32_t)(j * 3 + 161),
                     (uint32_t)(j * 5 + 161), (uint32_t)(j * 7 + 161) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item161 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_162(size_t limit) {
    Array<Item162> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item162 value = { (uint32_t)(j + 162), (uint32_t)(j * 3 + 162),
                     (uint32_t)(j * 5 + 162), (uint32_t)(j * 7 + 162) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item162 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_163(size_t limit) {
    Array<Item163> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item163 value = { (uint32_t)(j + 163), (uint32_t)(j * 3 + 163),
                     (uint32_t)(j * 5 + 163), (uint32_t)(j * 7 + 163) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item163 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_164(size_t limit) {
    Array<Item164> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item164 value = { (uint32_t)(j + 164), (uint32_t)(j * 3 + 164),
                     (uint32_t)(j * 5 + 164), (uint32_t)(j * 7 + 164) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item164 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_165(size_t limit) {
    Array<Item165> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item165 value = { (uint32_t)(j + 165), (uint32_t)(j * 3 + 165),
                     (uint32_t)(j * 5 + 165), (uint32_t)(j * 7 + 165) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item165 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_166(size_t limit) {
    Array<Item166> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item166 value = { (uint32_t)(j + 166), (uint32_t)(j * 3 + 166),
                     (uint32_t)(j * 5 + 166), (uint32_t)(j * 7 + 166) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item166 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_167(size_t limit) {
    Array<Item167> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item167 value = { (uint32_t)(j + 167), (uint32_t)(j * 3 + 167),
                     (uint32_t)(j * 5 + 167), (uint32_t)(j * 7 + 167) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item167 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_168(size_t limit) {
    Array<Item168> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item168 value = { (uint32_t)(j + 168), (uint32_t)(j * 3 + 168),
                     (uint32_t)(j * 5 + 168), (uint32_t)(j * 7 + 168) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item168 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_169(size_t limit) {
    Array<Item169> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item169 value = { (uint32_t)(j + 169), (uint32_t)(j * 3 + 169),
                     (uint32_t)(j * 5 + 169), (uint32_t)(j * 7 + 169) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item169 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_170(size_t limit) {
    Array<Item170> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item170 value = { (uint32_t)(j + 170), (uint32_t)(j * 3 + 170),
                     (uint32_t)(j * 5 + 170), (uint32_t)(j * 7 + 170) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item170 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_171(size_t limit) {
    Array<Item171> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item171 value = { (uint32_t)(j + 171), (uint32_t)(j * 3 + 171),
                     (uint32_t)(j * 5 + 171), (uint32_t)(j * 7 + 171) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item171 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_172(size_t limit) {
    Array<Item172> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item172 value = { (uint32_t)(j + 172), (uint32_t)(j * 3 + 172),
                     (uint32_t)(j * 5 + 172), (uint32_t)(j * 7 + 172) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item172 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_173(size_t limit) {
    Array<Item173> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item173 value = { (uint32_t)(j + 173), (uint32_t)(j * 3 + 173),
                     (uint32_t)(j * 5 + 173), (uint32_t)(j * 7 + 173) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item173 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_174(size_t limit) {
    Array<Item174> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item174 value = { (uint32_t)(j + 174), (uint32_t)(j * 3 + 174),
                     (uint32_t)(j * 5 + 174), (uint32_t)(j * 7 + 174) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item174 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_175(size_t limit) {
    Array<Item175> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item175 value = { (uint32_t)(j + 175), (uint32_t)(j * 3 + 175),
                     (uint32_t)(j * 5 + 175), (uint32_t)(j * 7 + 175) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item175 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_176(size_t limit) {
    Array<Item176> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item176 value = { (uint32_t)(j + 176), (uint32_t)(j * 3 + 176),
                     (uint32_t)(j * 5 + 176), (uint32_t)(j * 7 + 176) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item176 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_177(size_t limit) {
    Array<Item177> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item177 value = { (uint32_t)(j + 177), (uint32_t)(j * 3 + 177),
                     (uint32_t)(j * 5 + 177), (uint32_t)(j * 7 + 177) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item177 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_178(size_t limit) {
    Array<Item178> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item178 value = { (uint32_t)(j + 178), (uint32_t)(j * 3 + 178),
                     (uint32_t)(j * 5 + 178), (uint32_t)(j * 7 + 178) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item178 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_179(size_t limit) {
    Array<Item179> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item179 value = { (uint32_t)(j + 179), (uint32_t)(j * 3 + 179),
                     (uint32_t)(j * 5 + 179), (uint32_t)(j * 7 + 179) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item179 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_180(size_t limit) {
    Array<Item180> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item180 value = { (uint32_t)(j + 180), (uint32_t)(j * 3 + 180),
                     (uint32_t)(j * 5 + 180), (uint32_t)(j * 7 + 180) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item180 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_181(size_t limit) {
    Array<Item181> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item181 value = { (uint32_t)(j + 181), (uint32_t)(j * 3 + 181),
                     (uint32_t)(j * 5 + 181), (uint32_t)(j * 7 + 181) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item181 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_182(size_t limit) {
    Array<Item182> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item182 value = { (uint32_t)(j + 182), (uint32_t)(j * 3 + 182),
                     (uint32_t)(j * 5 + 182), (uint32_t)(j * 7 + 182) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item182 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_183(size_t limit) {
    Array<Item183> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item183 value = { (uint32_t)(j + 183), (uint32_t)(j * 3 + 183),
                     (uint32_t)(j * 5 + 183), (uint32_t)(j * 7 + 183) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item183 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_184(size_t limit) {
    Array<Item184> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item184 value = { (uint32_t)(j + 184), (uint32_t)(j * 3 + 184),
                     (uint32_t)(j * 5 + 184), (uint32_t)(j * 7 + 184) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item184 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_185(size_t limit) {
    Array<Item185> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item185 value = { (uint32_t)(j + 185), (uint32_t)(j * 3 + 185),
                     (uint32_t)(j * 5 + 185), (uint32_t)(j * 7 + 185) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item185 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_186(size_t limit) {
    Array<Item186> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item186 value = { (uint32_t)(j + 186), (uint32_t)(j * 3 + 186),
                     (uint32_t)(j * 5 + 186), (uint32_t)(j * 7 + 186) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item186 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_187(size_t limit) {
    Array<Item187> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item187 value = { (uint32_t)(j + 187), (uint32_t)(j * 3 + 187),
                     (uint32_t)(j * 5 + 187), (uint32_t)(j * 7 + 187) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item187 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_188(size_t limit) {
    Array<Item188> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item188 value = { (uint32_t)(j + 188), (uint32_t)(j * 3 + 188),
                     (uint32_t)(j * 5 + 188), (uint32_t)(j * 7 + 188) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item188 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_189(size_t limit) {
    Array<Item189> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item189 value = { (uint32_t)(j + 189), (uint32_t)(j * 3 + 189),
                     (uint32_t)(j * 5 + 189), (uint32_t)(j * 7 + 189) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item189 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_190(size_t limit) {
    Array<Item190> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item190 value = { (uint32_t)(j + 190), (uint32_t)(j * 3 + 190),
                     (uint32_t)(j * 5 + 190), (uint32_t)(j * 7 + 190) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item190 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_191(size_t limit) {
    Array<Item191> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item191 value = { (uint32_t)(j + 191), (uint32_t)(j * 3 + 191),
                     (uint32_t)(j * 5 + 191), (uint32_t)(j * 7 + 191) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item191 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_192(size_t limit) {
    Array<Item192> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item192 value = { (uint32_t)(j + 192), (uint32_t)(j * 3 + 192),
                     (uint32_t)(j * 5 + 192), (uint32_t)(j * 7 + 192) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item192 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_193(size_t limit) {
    Array<Item193> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item193 value = { (uint32_t)(j + 193), (uint32_t)(j * 3 + 193),
                     (uint32_t)(j * 5 + 193), (uint32_t)(j * 7 + 193) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item193 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_194(size_t limit) {
    Array<Item194> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item194 value = { (uint32_t)(j + 194), (uint32_t)(j * 3 + 194),
                     (uint32_t)(j * 5 + 194), (uint32_t)(j * 7 + 194) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item194 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_195(size_t limit) {
    Array<Item195> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item195 value = { (uint32_t)(j + 195), (uint32_t)(j * 3 + 195),
                     (uint32_t)(j * 5 + 195), (uint32_t)(j * 7 + 195) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item195 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_196(size_t limit) {
    Array<Item196> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item196 value = { (uint32_t)(j + 196), (uint32_t)(j * 3 + 196),
                     (uint32_t)(j * 5 + 196), (uint32_t)(j * 7 + 196) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item196 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_197(size_t limit) {
    Array<Item197> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item197 value = { (uint32_t)(j + 197), (uint32_t)(j * 3 + 197),
                     (uint32_t)(j * 5 + 197), (uint32_t)(j * 7 + 197) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item197 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_198(size_t limit) {
    Array<Item198> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item198 value = { (uint32_t)(j + 198), (uint32_t)(j * 3 + 198),
                     (uint32_t)(j * 5 + 198), (uint32_t)(j * 7 + 198) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item198 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_199(size_t limit) {
    Array<Item199> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item199 value = { (uint32_t)(j + 199), (uint32_t)(j * 3 + 199),
                     (uint32_t)(j * 5 + 199), (uint32_t)(j * 7 + 199) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item199 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_200(size_t limit) {
    Array<Item200> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item200 value = { (uint32_t)(j + 200), (uint32_t)(j * 3 + 200),
                     (uint32_t)(j * 5 + 200), (uint32_t)(j * 7 + 200) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item200 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_201(size_t limit) {
    Array<Item201> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item201 value = { (uint32_t)(j + 201), (uint32_t)(j * 3 + 201),
                     (uint32_t)(j * 5 + 201), (uint32_t)(j * 7 + 201) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item201 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_202(size_t limit) {
    Array<Item202> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item202 value = { (uint32_t)(j + 202), (uint32_t)(j * 3 + 202),
                     (uint32_t)(j * 5 + 202), (uint32_t)(j * 7 + 202) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item202 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_203(size_t limit) {
    Array<Item203> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item203 value = { (uint32_t)(j + 203), (uint32_t)(j * 3 + 203),
                     (uint32_t)(j * 5 + 203), (uint32_t)(j * 7 + 203) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item203 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_204(size_t limit) {
    Array<Item204> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item204 value = { (uint32_t)(j + 204), (uint32_t)(j * 3 + 204),
                     (uint32_t)(j * 5 + 204), (uint32_t)(j * 7 + 204) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item204 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_205(size_t limit) {
    Array<Item205> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item205 value = { (uint32_t)(j + 205), (uint32_t)(j * 3 + 205),
                     (uint32_t)(j * 5 + 205), (uint32_t)(j * 7 + 205) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item205 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_206(size_t limit) {
    Array<Item206> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item206 value = { (uint32_t)(j + 206), (uint32_t)(j * 3 + 206),
                     (uint32_t)(j * 5 + 206), (uint32_t)(j * 7 + 206) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item206 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_207(size_t limit) {
    Array<Item207> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item207 value = { (uint32_t)(j + 207), (uint32_t)(j * 3 + 207),
                     (uint32_t)(j * 5 + 207), (uint32_t)(j * 7 + 207) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item207 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_208(size_t limit) {
    Array<Item208> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item208 value = { (uint32_t)(j + 208), (uint32_t)(j * 3 + 208),
                     (uint32_t)(j * 5 + 208), (uint32_t)(j * 7 + 208) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item208 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_209(size_t limit) {
    Array<Item209> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item209 value = { (uint32_t)(j + 209), (uint32_t)(j * 3 + 209),
                     (uint32_t)(j * 5 + 209), (uint32_t)(j * 7 + 209) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item209 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_210(size_t limit) {
    Array<Item210> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item210 value = { (uint32_t)(j + 210), (uint32_t)(j * 3 + 210),
                     (uint32_t)(j * 5 + 210), (uint32_t)(j * 7 + 210) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item210 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_211(size_t limit) {
    Array<Item211> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item211 value = { (uint32_t)(j + 211), (uint32_t)(j * 3 + 211),
                     (uint32_t)(j * 5 + 211), (uint32_t)(j * 7 + 211) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item211 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_212(size_t limit) {
    Array<Item212> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item212 value = { (uint32_t)(j + 212), (uint32_t)(j * 3 + 212),
                     (uint32_t)(j * 5 + 212), (uint32_t)(j * 7 + 212) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item212 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_213(size_t limit) {
    Array<Item213> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item213 value = { (uint32_t)(j + 213), (uint32_t)(j * 3 + 213),
                     (uint32_t)(j * 5 + 213), (uint32_t)(j * 7 + 213) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item213 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_214(size_t limit) {
    Array<Item214> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item214 value = { (uint32_t)(j + 214), (uint32_t)(j * 3 + 214),
                     (uint32_t)(j * 5 + 214), (uint32_t)(j * 7 + 214) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item214 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_215(size_t limit) {
    Array<Item215> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item215 value = { (uint32_t)(j + 215), (uint32_t)(j * 3 + 215),
                     (uint32_t)(j * 5 + 215), (uint32_t)(j * 7 + 215) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item215 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_216(size_t limit) {
    Array<Item216> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item216 value = { (uint32_t)(j + 216), (uint32_t)(j * 3 + 216),
                     (uint32_t)(j * 5 + 216), (uint32_t)(j * 7 + 216) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item216 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_217(size_t limit) {
    Array<Item217> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item217 value = { (uint32_t)(j + 217), (uint32_t)(j * 3 + 217),
                     (uint32_t)(j * 5 + 217), (uint32_t)(j * 7 + 217) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item217 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_218(size_t limit) {
    Array<Item218> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item218 value = { (uint32_t)(j + 218), (uint32_t)(j * 3 + 218),
                     (uint32_t)(j * 5 + 218), (uint32_t)(j * 7 + 218) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item218 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_219(size_t limit) {
    Array<Item219> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item219 value = { (uint32_t)(j + 219), (uint32_t)(j * 3 + 219),
                     (uint32_t)(j * 5 + 219), (uint32_t)(j * 7 + 219) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item219 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_220(size_t limit) {
    Array<Item220> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item220 value = { (uint32_t)(j + 220), (uint32_t)(j * 3 + 220),
                     (uint32_t)(j * 5 + 220), (uint32_t)(j * 7 + 220) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item220 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_221(size_t limit) {
    Array<Item221> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item221 value = { (uint32_t)(j + 221), (uint32_t)(j * 3 + 221),
                     (uint32_t)(j * 5 + 221), (uint32_t)(j * 7 + 221) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item221 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_222(size_t limit) {
    Array<Item222> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item222 value = { (uint32_t)(j + 222), (uint32_t)(j * 3 + 222),
                     (uint32_t)(j * 5 + 222), (uint32_t)(j * 7 + 222) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item222 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_223(size_t limit) {
    Array<Item223> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item223 value = { (uint32_t)(j + 223), (uint32_t)(j * 3 + 223),
                     (uint32_t)(j * 5 + 223), (uint32_t)(j * 7 + 223) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item223 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_224(size_t limit) {
    Array<Item224> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item224 value = { (uint32_t)(j + 224), (uint32_t)(j * 3 + 224),
                     (uint32_t)(j * 5 + 224), (uint32_t)(j * 7 + 224) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item224 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_225(size_t limit) {
    Array<Item225> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item225 value = { (uint32_t)(j + 225), (uint32_t)(j * 3 + 225),
                     (uint32_t)(j * 5 + 225), (uint32_t)(j * 7 + 225) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item225 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_226(size_t limit) {
    Array<Item226> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item226 value = { (uint32_t)(j + 226), (uint32_t)(j * 3 + 226),
                     (uint32_t)(j * 5 + 226), (uint32_t)(j * 7 + 226) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item226 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_227(size_t limit) {
    Array<Item227> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item227 value = { (uint32_t)(j + 227), (uint32_t)(j * 3 + 227),
                     (uint32_t)(j * 5 + 227), (uint32_t)(j * 7 + 227) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item227 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_228(size_t limit) {
    Array<Item228> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item228 value = { (uint32_t)(j + 228), (uint32_t)(j * 3 + 228),
                     (uint32_t)(j * 5 + 228), (uint32_t)(j * 7 + 228) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item228 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_229(size_t limit) {
    Array<Item229> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item229 value = { (uint32_t)(j + 229), (uint32_t)(j * 3 + 229),
                     (uint32_t)(j * 5 + 229), (uint32_t)(j * 7 + 229) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item229 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_230(size_t limit) {
    Array<Item230> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item230 value = { (uint32_t)(j + 230), (uint32_t)(j * 3 + 230),
                     (uint32_t)(j * 5 + 230), (uint32_t)(j * 7 + 230) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item230 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_231(size_t limit) {
    Array<Item231> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item231 value = { (uint32_t)(j + 231), (uint32_t)(j * 3 + 231),
                     (uint32_t)(j * 5 + 231), (uint32_t)(j * 7 + 231) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item231 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_232(size_t limit) {
    Array<Item232> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item232 value = { (uint32_t)(j + 232), (uint32_t)(j * 3 + 232),
                     (uint32_t)(j * 5 + 232), (uint32_t)(j * 7 + 232) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item232 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_233(size_t limit) {
    Array<Item233> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item233 value = { (uint32_t)(j + 233), (uint32_t)(j * 3 + 233),
                     (uint32_t)(j * 5 + 233), (uint32_t)(j * 7 + 233) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item233 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_234(size_t limit) {
    Array<Item234> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item234 value = { (uint32_t)(j + 234), (uint32_t)(j * 3 + 234),
                     (uint32_t)(j * 5 + 234), (uint32_t)(j * 7 + 234) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item234 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_235(size_t limit) {
    Array<Item235> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item235 value = { (uint32_t)(j + 235), (uint32_t)(j * 3 + 235),
                     (uint32_t)(j * 5 + 235), (uint32_t)(j * 7 + 235) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item235 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_236(size_t limit) {
    Array<Item236> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item236 value = { (uint32_t)(j + 236), (uint32_t)(j * 3 + 236),
                     (uint32_t)(j * 5 + 236), (uint32_t)(j * 7 + 236) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item236 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_237(size_t limit) {
    Array<Item237> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item237 value = { (uint32_t)(j + 237), (uint32_t)(j * 3 + 237),
                     (uint32_t)(j * 5 + 237), (uint32_t)(j * 7 + 237) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item237 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_238(size_t limit) {
    Array<Item238> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item238 value = { (uint32_t)(j + 238), (uint32_t)(j * 3 + 238),
                     (uint32_t)(j * 5 + 238), (uint32_t)(j * 7 + 238) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item238 *p = &(*array.at(j));
        result += p->x + p->y + p->z + p->w;
    }
    free(array.data);
    return result;
}
static uint64_t work_239(size_t limit) {
    Array<Item239> array{};
    for (size_t j = 0; j < limit; ++j) {
        Item239 value = { (uint32_t)(j + 239), (uint32_t)(j * 3 + 239),
                     (uint32_t)(j * 5 + 239), (uint32_t)(j * 7 + 239) };
        array.push(value);
    }
    uint64_t result = 0;
    for (size_t j = 0; j < limit; ++j) {
        const Item239 *p = &(*array.at(j));
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
    sum += work_030(limit);
    sum += work_031(limit);
    sum += work_032(limit);
    sum += work_033(limit);
    sum += work_034(limit);
    sum += work_035(limit);
    sum += work_036(limit);
    sum += work_037(limit);
    sum += work_038(limit);
    sum += work_039(limit);
    sum += work_040(limit);
    sum += work_041(limit);
    sum += work_042(limit);
    sum += work_043(limit);
    sum += work_044(limit);
    sum += work_045(limit);
    sum += work_046(limit);
    sum += work_047(limit);
    sum += work_048(limit);
    sum += work_049(limit);
    sum += work_050(limit);
    sum += work_051(limit);
    sum += work_052(limit);
    sum += work_053(limit);
    sum += work_054(limit);
    sum += work_055(limit);
    sum += work_056(limit);
    sum += work_057(limit);
    sum += work_058(limit);
    sum += work_059(limit);
    sum += work_060(limit);
    sum += work_061(limit);
    sum += work_062(limit);
    sum += work_063(limit);
    sum += work_064(limit);
    sum += work_065(limit);
    sum += work_066(limit);
    sum += work_067(limit);
    sum += work_068(limit);
    sum += work_069(limit);
    sum += work_070(limit);
    sum += work_071(limit);
    sum += work_072(limit);
    sum += work_073(limit);
    sum += work_074(limit);
    sum += work_075(limit);
    sum += work_076(limit);
    sum += work_077(limit);
    sum += work_078(limit);
    sum += work_079(limit);
    sum += work_080(limit);
    sum += work_081(limit);
    sum += work_082(limit);
    sum += work_083(limit);
    sum += work_084(limit);
    sum += work_085(limit);
    sum += work_086(limit);
    sum += work_087(limit);
    sum += work_088(limit);
    sum += work_089(limit);
    sum += work_090(limit);
    sum += work_091(limit);
    sum += work_092(limit);
    sum += work_093(limit);
    sum += work_094(limit);
    sum += work_095(limit);
    sum += work_096(limit);
    sum += work_097(limit);
    sum += work_098(limit);
    sum += work_099(limit);
    sum += work_100(limit);
    sum += work_101(limit);
    sum += work_102(limit);
    sum += work_103(limit);
    sum += work_104(limit);
    sum += work_105(limit);
    sum += work_106(limit);
    sum += work_107(limit);
    sum += work_108(limit);
    sum += work_109(limit);
    sum += work_110(limit);
    sum += work_111(limit);
    sum += work_112(limit);
    sum += work_113(limit);
    sum += work_114(limit);
    sum += work_115(limit);
    sum += work_116(limit);
    sum += work_117(limit);
    sum += work_118(limit);
    sum += work_119(limit);
    sum += work_120(limit);
    sum += work_121(limit);
    sum += work_122(limit);
    sum += work_123(limit);
    sum += work_124(limit);
    sum += work_125(limit);
    sum += work_126(limit);
    sum += work_127(limit);
    sum += work_128(limit);
    sum += work_129(limit);
    sum += work_130(limit);
    sum += work_131(limit);
    sum += work_132(limit);
    sum += work_133(limit);
    sum += work_134(limit);
    sum += work_135(limit);
    sum += work_136(limit);
    sum += work_137(limit);
    sum += work_138(limit);
    sum += work_139(limit);
    sum += work_140(limit);
    sum += work_141(limit);
    sum += work_142(limit);
    sum += work_143(limit);
    sum += work_144(limit);
    sum += work_145(limit);
    sum += work_146(limit);
    sum += work_147(limit);
    sum += work_148(limit);
    sum += work_149(limit);
    sum += work_150(limit);
    sum += work_151(limit);
    sum += work_152(limit);
    sum += work_153(limit);
    sum += work_154(limit);
    sum += work_155(limit);
    sum += work_156(limit);
    sum += work_157(limit);
    sum += work_158(limit);
    sum += work_159(limit);
    sum += work_160(limit);
    sum += work_161(limit);
    sum += work_162(limit);
    sum += work_163(limit);
    sum += work_164(limit);
    sum += work_165(limit);
    sum += work_166(limit);
    sum += work_167(limit);
    sum += work_168(limit);
    sum += work_169(limit);
    sum += work_170(limit);
    sum += work_171(limit);
    sum += work_172(limit);
    sum += work_173(limit);
    sum += work_174(limit);
    sum += work_175(limit);
    sum += work_176(limit);
    sum += work_177(limit);
    sum += work_178(limit);
    sum += work_179(limit);
    sum += work_180(limit);
    sum += work_181(limit);
    sum += work_182(limit);
    sum += work_183(limit);
    sum += work_184(limit);
    sum += work_185(limit);
    sum += work_186(limit);
    sum += work_187(limit);
    sum += work_188(limit);
    sum += work_189(limit);
    sum += work_190(limit);
    sum += work_191(limit);
    sum += work_192(limit);
    sum += work_193(limit);
    sum += work_194(limit);
    sum += work_195(limit);
    sum += work_196(limit);
    sum += work_197(limit);
    sum += work_198(limit);
    sum += work_199(limit);
    sum += work_200(limit);
    sum += work_201(limit);
    sum += work_202(limit);
    sum += work_203(limit);
    sum += work_204(limit);
    sum += work_205(limit);
    sum += work_206(limit);
    sum += work_207(limit);
    sum += work_208(limit);
    sum += work_209(limit);
    sum += work_210(limit);
    sum += work_211(limit);
    sum += work_212(limit);
    sum += work_213(limit);
    sum += work_214(limit);
    sum += work_215(limit);
    sum += work_216(limit);
    sum += work_217(limit);
    sum += work_218(limit);
    sum += work_219(limit);
    sum += work_220(limit);
    sum += work_221(limit);
    sum += work_222(limit);
    sum += work_223(limit);
    sum += work_224(limit);
    sum += work_225(limit);
    sum += work_226(limit);
    sum += work_227(limit);
    sum += work_228(limit);
    sum += work_229(limit);
    sum += work_230(limit);
    sum += work_231(limit);
    sum += work_232(limit);
    sum += work_233(limit);
    sum += work_234(limit);
    sum += work_235(limit);
    sum += work_236(limit);
    sum += work_237(limit);
    sum += work_238(limit);
    sum += work_239(limit);
    printf("%llu\n", (unsigned long long)sum);
    return 0;
}
