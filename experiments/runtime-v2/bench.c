/* Compile with -DVARIANT=0,1,2,3,5,6,7 as C11; -DVARIANT=4 as C++20. */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <time.h>

#if !defined(VARIANT)
#error Define VARIANT=0 C includes; 1 Hooper noinline; 2 Hooper typed-index; 3 Hooper inline; 4 C++ template; 5 Hooper macro push fast path; 6 idiomatic inline; 7 idiomatic no-inline-keyword
#endif
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define WORK_GROW 1
#define WORK_RESERVED 2
#define WORK_INDEXED 3
#define WORK_RANDOM 4
#define WORK_DIRECT 5
#define WORK_MUTATE 6

typedef struct { uint64_t ns, checksum; } Result;
static inline uint64_t now_ns(void) {
    struct timespec t;
    if (clock_gettime(CLOCK_MONOTONIC_RAW, &t) != 0) abort();
    return (uint64_t)t.tv_sec * UINT64_C(1000000000) + (uint64_t)t.tv_nsec;
}
static inline void escape_memory(const void *p) {
#if defined(__GNUC__) || defined(__clang__)
    __asm__ __volatile__("" : : "g"(p) : "memory");
#else
    (void)p;
#endif
}

#if VARIANT == 1 || VARIANT == 2 || VARIANT == 3 || VARIANT == 5
typedef struct { void *data; size_t count, capacity; } RawArray;
#define TypedArray(T) union { RawArray raw; T *_type_witness; }
#if VARIANT == 3
#define RAW_FUNC static inline __attribute__((always_inline))
#elif defined(__GNUC__) && !defined(__clang__)
/* noipa prevents GCC from silently generating width-specific clones. */
#define RAW_FUNC static __attribute__((noipa))
#else
#define RAW_FUNC static __attribute__((noinline))
#endif
RAW_FUNC void raw_reserve(RawArray *a, size_t need, size_t width) {
    if (need <= a->capacity) return;
    if (need > SIZE_MAX / width) abort();
    void *p = realloc(a->data, need * width);
    if (!p) abort();
    a->data = p;
    a->capacity = need;
}
RAW_FUNC void raw_push(RawArray *a, const void *value, size_t width) {
    if (a->count == a->capacity) {
        size_t nc = a->capacity ? a->capacity * 2 : 4;
        if (nc < a->capacity) abort();
        if (nc > SIZE_MAX / width) abort();
        void *p = realloc(a->data, nc * width);
        if (!p) abort();
        a->data = p;
        a->capacity = nc;
    }
    memcpy((unsigned char*)a->data + a->count * width, value, width);
    ++a->count;
}
#if VARIANT == 5
/* Slow path only: one shared type-erased allocator for all element types. */
RAW_FUNC void raw_grow(RawArray *a, size_t width) {
    size_t nc = a->capacity ? a->capacity * 2 : 4;
    if (nc < a->capacity || nc > SIZE_MAX / width) abort();
    void *p = realloc(a->data, nc * width);
    if (!p) abort();
    a->data = p;
    a->capacity = nc;
}
#endif
RAW_FUNC void *raw_at(RawArray *a, size_t i, size_t width) {
    if (i >= a->count) abort();
    return (unsigned char*)a->data + i*width;
}
static inline void checked_index(size_t i, size_t n) {
    if (i >= n) abort();
}
#elif VARIANT == 6 || VARIANT == 7
/* Idiomatic Hooper-style: one shared representation and allocator.
   Deliberately no always_inline/noinline/noipa attributes anywhere. */
typedef struct { void *data; size_t count, capacity; } RawArray;
#define TypedArray(T) union { RawArray raw; T *_type_witness; }

/* Substantial / rare operations are ordinary externally-linked functions. */
void raw_reserve(RawArray *a, size_t need, size_t width) {
    if (need <= a->capacity) return;
    if (width == 0 || need > SIZE_MAX / width) abort();
    void *p = realloc(a->data, need * width);
    if (!p) abort();
    a->data = p;
    a->capacity = need;
}
void raw_grow(RawArray *a, size_t width) {
    size_t next = a->capacity ? a->capacity * 2 : 4;
    if (next < a->capacity) abort();
    raw_reserve(a, next, width);
}

/* Tiny, frequently used helpers; normal compiler discretion. */
#if VARIANT == 6
#define HOT_HELPER static inline
#else
#define HOT_HELPER static
#endif
HOT_HELPER void raw_push_small(RawArray *a, const void *value, size_t width) {
    if (a->count == a->capacity) raw_grow(a, width);
    memcpy((unsigned char *)a->data + a->count * width, value, width);
    ++a->count;
}
HOT_HELPER void *raw_at_small(RawArray *a, size_t index, size_t width) {
    if (index >= a->count) abort();
    return (unsigned char *)a->data + index * width;
}
#undef HOT_HELPER
#elif VARIANT == 4
template<class T> struct Array {
    T *data;
    size_t count, capacity;
    inline void reserve(size_t need) {
        if (need <= capacity) return;
        if (need > SIZE_MAX / sizeof(T)) abort();
        T *p = (T*)realloc(data, need * sizeof(T));
        if (!p) abort();
        data = p;
        capacity = need;
    }
    inline void push(T v) {
        if (count == capacity) {
            size_t nc = capacity ? capacity*2 : 4;
            if (nc < capacity) abort();
            reserve(nc);
        }
        data[count++] = v;
    }
    inline T *at(size_t i) {
        if (i >= count) abort();
        return &data[i];
    }
};
#endif

typedef struct { uint32_t w[1]; } Elem4;
typedef struct { uint32_t w[4]; } Elem16;
typedef struct { uint32_t w[16]; } Elem64;
typedef struct { uint32_t w[64]; } Elem256;
#if defined(__cplusplus)
static_assert(sizeof(Elem4)==4 && sizeof(Elem16)==16 && sizeof(Elem64)==64 && sizeof(Elem256)==256);
#else
_Static_assert(sizeof(Elem4)==4 && sizeof(Elem16)==16 && sizeof(Elem64)==64 && sizeof(Elem256)==256, "sizes");
#endif

#define ELEM Elem4
#define TAG Elem4
#include "workload.inc"
#undef ELEM
#undef TAG
#define ELEM Elem16
#define TAG Elem16
#include "workload.inc"
#undef ELEM
#undef TAG
#define ELEM Elem64
#define TAG Elem64
#include "workload.inc"
#undef ELEM
#undef TAG
#define ELEM Elem256
#define TAG Elem256
#include "workload.inc"
#undef ELEM
#undef TAG

int main(int argc, char **argv) {
    if (argc != 5) {
        fprintf(stderr, "usage: %s workload(1..6) element_bytes(4,16,64,256) length repetitions\n", argv[0]);
        return 2;
    }
    int workload = atoi(argv[1]);
    int bytes = atoi(argv[2]);
    size_t n = (size_t)strtoull(argv[3], NULL, 10);
    size_t reps = (size_t)strtoull(argv[4], NULL, 10);
    if (workload<1 || workload>6 || n<2 || (n & (n-1)) != 0 || reps<1) return 3;
    Result r;
    uint64_t seed = UINT64_C(0x4F7A9C1B2DE03681);
    switch(bytes) {
        case 4: r = run_Elem4(workload,n,reps,seed); break;
        case 16: r = run_Elem16(workload,n,reps,seed); break;
        case 64: r = run_Elem64(workload,n,reps,seed); break;
        case 256: r = run_Elem256(workload,n,reps,seed); break;
        default: return 4;
    }
    printf("%llu %llu\n", (unsigned long long)r.ns, (unsigned long long)r.checksum);
    return 0;
}
