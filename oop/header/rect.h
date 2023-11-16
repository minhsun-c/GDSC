#ifndef _RECT_H_
#define _RECT_H_

#include "base.h"

struct rect {
	Shape_t based;
	int width, height;
};

typedef struct rect Rect_t;
double rect_area (void *);
int init_rect (Rect_t **, int , int);


#endif // _RECT_H_