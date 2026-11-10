/* One instantiation per POD element type, shared workload code for all variants. */
#define ARR_NAME CAT(TAG,Array)
#if VARIANT == 0
#include "typed_array.inc"
#define ARRAY_T ARR_NAME
#define RESERVE(a,n) CAT(ARR_NAME,_reserve)((a),(n))
#define PUSH(a,v) CAT(ARR_NAME,_push)((a),(v))
#define AT(a,i) CAT(ARR_NAME,_at)((a),(i))
#define DATA(a) ((a)->data)
#define RESET(a) ((a)->count=0)
#define DROP(a) free((a)->data)
#elif VARIANT == 1 || VARIANT == 2 || VARIANT == 3 || VARIANT == 5
#define ARRAY_T ARR_NAME
typedef TypedArray(ELEM) ARRAY_T;
#define RESERVE(a,n) raw_reserve(&(a)->raw, (n), sizeof(ELEM))
#if VARIANT == 5
/* Inline typed store on hot path, shared allocator on uncommon growth path. */
#define PUSH(a,v) do { \
    RawArray *_raw = &(a)->raw; \
    if (_raw->count == _raw->capacity) raw_grow(_raw, sizeof(*(a)->_type_witness)); \
    __typeof__((a)->_type_witness) _data = (__typeof__((a)->_type_witness))_raw->data; \
    _data[_raw->count++] = (v); \
} while (0)
#else
#define PUSH(a,v) do { __typeof__(*((a)->_type_witness)) tmp = (v); raw_push(&(a)->raw, &tmp, sizeof(tmp)); } while (0)
#endif
#define DATA(a) ((__typeof__((a)->_type_witness))((a)->raw.data))
#if VARIANT == 2 || VARIANT == 5
/* Same out-of-line push backend, but typed inline indexing (no raw_at call). */
#define AT(a,i) (checked_index((i),(a)->raw.count), &(DATA(a)[i]))
#else
#define AT(a,i) ((__typeof__((a)->_type_witness))raw_at(&(a)->raw, (i), sizeof(ELEM)))
#endif
#define RESET(a) ((a)->raw.count=0)
#define DROP(a) free((a)->raw.data)
#elif VARIANT == 4
#define ARRAY_T Array<ELEM>
#define RESERVE(a,n) (a)->reserve(n)
#define PUSH(a,v) (a)->push(v)
#define AT(a,i) (a)->at(i)
#define DATA(a) ((a)->data)
#define RESET(a) ((a)->count=0)
#define DROP(a) free((a)->data)
#endif

static Result CAT(run_,TAG)(int workload, size_t n, size_t repetitions, uint64_t seed) {
    Result out = {0,0};
    if (n == 0 || n > SIZE_MAX/sizeof(ELEM)) abort();
    ELEM *source = (ELEM*)malloc(n * sizeof(ELEM));
    if (!source) abort();
    uint64_t rng = seed;
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < sizeof(ELEM)/sizeof(uint32_t); ++j) {
            rng ^= rng >> 12;
            rng ^= rng << 25;
            rng ^= rng >> 27;
            source[i].w[j] = (uint32_t)((rng * UINT64_C(2685821657736338717)) >> 32);
        }
    }
    uint64_t checksum = 0;
    uint64_t before, after;
    if (workload == WORK_GROW) {
        before = now_ns();
        for (size_t r = 0; r < repetitions; ++r) {
            ARRAY_T a = {0};
            for (size_t i = 0; i < n; ++i) PUSH(&a, source[i]);
            escape_memory(DATA(&a));
            checksum += (uint64_t)DATA(&a)[0].w[0] + DATA(&a)[n/2].w[0] + DATA(&a)[n-1].w[0];
            DROP(&a);
        }
        after = now_ns();
    } else {
        ARRAY_T a = {0};
        RESERVE(&a, n);
        if (workload != WORK_RESERVED) {
            for (size_t i = 0; i < n; ++i) PUSH(&a, source[i]);
        }
        uint32_t *indices = NULL;
        if (workload == WORK_RANDOM) {
            indices = (uint32_t *)malloc(n * sizeof(uint32_t));
            if (!indices) abort();
            /* All chosen n are powers of two, and indices are prepared outside timing. */
            uint32_t x = (uint32_t)seed;
            for (size_t i = 0; i < n; ++i) {
                x ^= x << 13; x ^= x >> 17; x ^= x << 5;
                indices[i] = x & (uint32_t)(n-1);
            }
        }
        before = now_ns();
        for (size_t r = 0; r < repetitions; ++r) {
            if (workload == WORK_RESERVED) {
                RESET(&a);
                for (size_t i = 0; i < n; ++i) PUSH(&a, source[i]);
                escape_memory(DATA(&a));
                checksum += (uint64_t)DATA(&a)[0].w[0] + DATA(&a)[n-1].w[0];
            } else if (workload == WORK_INDEXED) {
                for (size_t i = 0; i < n; ++i) checksum += AT(&a, i)->w[0];
                escape_memory(DATA(&a));
            } else if (workload == WORK_RANDOM) {
                for (size_t i = 0; i < n; ++i) checksum += AT(&a, indices[i])->w[0];
                escape_memory(DATA(&a));
            } else if (workload == WORK_DIRECT) {
                ELEM *data = DATA(&a);
                for (size_t i = 0; i < n; ++i) checksum += data[i].w[0];
                escape_memory(data);
            } else if (workload == WORK_MUTATE) {
                for (size_t i = 0; i < n; ++i) AT(&a, i)->w[0] += 1;
                escape_memory(DATA(&a));
            } else abort();
        }
        after = now_ns();
        if (workload == WORK_MUTATE) {
            for (size_t i=0; i<n; ++i) checksum += DATA(&a)[i].w[0];
        }
        free(indices);
        DROP(&a);
    }
    free(source);
    out.ns = after - before;
    out.checksum = checksum;
    return out;
}

#undef ARR_NAME
#undef ARRAY_T
#undef RESERVE
#undef PUSH
#undef AT
#undef DATA
#undef RESET
#undef DROP
