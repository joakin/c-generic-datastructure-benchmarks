/* T and NAME must be defined. Deliberately not include-guarded. */
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
