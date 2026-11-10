#include "hooper_array.h"
#include <stdint.h>
#include <stdio.h>

typedef struct { float x, y; } Vec2;
typedef HooperArray(Vec2) Vec2Array;
typedef HooperArray(uint32_t) IdArray;

int main(void) {
    Vec2Array points = {0};
    IdArray ids = {0};
    hooper_array_push(&points, ((Vec2){1.0f, 2.0f}));
    hooper_array_push(&points, ((Vec2){3.0f, 4.0f}));
    hooper_array_push(&ids, UINT32_C(9));
    Vec2 *p = hooper_array_at(&points, 1);
    printf("%.0f %.0f %u\n", (double)p->x, (double)p->y, *hooper_array_at(&ids, 0));
    hooper_array_free(&ids);
    hooper_array_free(&points);
}
