#include <stdlib.h>
#include "../header/rect.h"

double rect_area (void *obj) {
    return ((Rect_t *)obj) -> width * ((Rect_t *)obj) -> height;
}

int init_rect (Rect_t **obj, int width, int height) {
	if (NULL == ((* obj) = (Rect_t *) malloc(sizeof(Rect_t)))) 
        return -1;
    (*obj) -> width = width;
    (*obj) -> height = height;
    ( (Shape_t *) (* obj) ) -> type = Rect;
    ( (Shape_t *) (* obj) ) -> get_area = rect_area;
    return 0;
}