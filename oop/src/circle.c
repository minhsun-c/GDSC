#include <stdlib.h>
#include "../header/circle.h"

double circle_area (void *obj) {
    return ((Circle_t *)obj) -> radius * ((Circle_t *)obj) -> radius * 3.14;
}

int init_circle (Circle_t **obj, int radius) {
	if (NULL == ((* obj) = (Circle_t *) malloc(sizeof(Circle_t)))) 
        return -1;
    (*obj) -> radius = radius;
    ( (Shape_t *) (* obj) ) -> type = Circle;
    ( (Shape_t *) (* obj) ) -> get_area = circle_area;
    return 0;
}

