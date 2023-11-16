#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include "base.h"

typedef struct circle Circle_t;
double circle_area (void *);
int init_circle (Circle_t **, int);

struct circle {
	Shape_t based;
	int radius;
};

#endif // _CIRCLE_H_