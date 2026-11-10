/* Re-included for each ELEM/TAG pair: a separately specialized implementation. */
typedef struct { ELEM *data; size_t count, capacity; } ARR_NAME;
static inline void CAT(ARR_NAME,_reserve)(ARR_NAME *a, size_t need) {
    if (need <= a->capacity) return;
    if (need > SIZE_MAX / sizeof(ELEM)) abort();
    ELEM *p = (ELEM*)realloc(a->data, need * sizeof(ELEM));
    if (!p) abort();
    a->data = p;
    a->capacity = need;
}
static inline void CAT(ARR_NAME,_push)(ARR_NAME *a, ELEM value) {
    if (a->count == a->capacity) {
        size_t nc = a->capacity ? a->capacity * 2 : 4;
        if (nc < a->capacity) abort();
        CAT(ARR_NAME,_reserve)(a, nc);
    }
    a->data[a->count++] = value;
}
static inline ELEM *CAT(ARR_NAME,_at)(ARR_NAME *a, size_t i) {
    if (i >= a->count) abort();
    return &a->data[i];
}
