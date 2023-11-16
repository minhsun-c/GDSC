#include "header/header.h"

int main() {
    Rect_t *r = NULL;
    init_rect(&r, 5, 10);
    Circle_t *c = NULL;
    init_circle(&c, 3);
    printf("R [#%d]: %lf\n", 
        ((Shape_t *)r) -> type, 
        ((Shape_t *)r) -> get_area(r)
    );
}