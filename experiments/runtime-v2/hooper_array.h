#ifndef HOOPER_ARRAY_H
#define HOOPER_ARRAY_H

/* Minimal Hooper-style dynamic array demonstration (C11 on GCC/Clang;
   relies on __typeof__, available as typeof in C23).
   For POD types with fundamental alignment, not over-aligned objects.
*/
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    void *data;
    size_t count;
    size_t capacity;
} HooperRawArray;

/* Substantial allocation work: defined once in hooper_array.c. */
void hooper_raw_reserve(HooperRawArray *a, size_t wanted, size_t width);
void hooper_raw_grow(HooperRawArray *a, size_t width);

/* Small common-case helpers: no forced-inlining attributes. */
static inline void hooper_raw_push(HooperRawArray *a, const void *value, size_t width) {
    if (a->count == a->capacity) hooper_raw_grow(a, width);
    memcpy((unsigned char *)a->data + a->count * width, value, width);
    ++a->count;
}
static inline void *hooper_raw_at(HooperRawArray *a, size_t index, size_t width) {
    if (index >= a->count) abort();
    return (unsigned char *)a->data + index * width;
}

/* Type witness used in *unevaluated* contexts. Only `raw` is accessed. */
#define HooperArray(T) union { HooperRawArray raw; T *_element_type; }
#define hooper_array_push(a, value) do {                          \
    __typeof__(*((a)->_element_type)) hooper_value_ = (value);   \
    hooper_raw_push(&(a)->raw, &hooper_value_, sizeof(hooper_value_)); \
} while (0)
#define hooper_array_at(a, index) \
    ((__typeof__((a)->_element_type)) \
        hooper_raw_at(&(a)->raw, (index), sizeof(*(a)->_element_type)))
#define hooper_array_reserve(a, count) \
    hooper_raw_reserve(&(a)->raw, (count), sizeof(*(a)->_element_type))
#define hooper_array_data(a) \
    ((__typeof__((a)->_element_type))((a)->raw.data))
#define hooper_array_free(a) do { \
    free((a)->raw.data); \
    (a)->raw = (HooperRawArray){0}; \
} while (0)

#endif
