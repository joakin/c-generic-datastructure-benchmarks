#include "hooper_array.h"
#include <stdint.h>

void hooper_raw_reserve(HooperRawArray *a, size_t wanted, size_t width) {
    if (wanted <= a->capacity) return;
    if (width == 0 || wanted > SIZE_MAX / width) abort();
    void *p = realloc(a->data, wanted * width);
    if (!p) abort();
    a->data = p;
    a->capacity = wanted;
}
void hooper_raw_grow(HooperRawArray *a, size_t width) {
    size_t next = a->capacity ? a->capacity * 2 : 4;
    if (next < a->capacity) abort();
    hooper_raw_reserve(a, next, width);
}
