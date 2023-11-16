#ifndef _BASE_H_
#define _BASE_H_

typedef struct shape Shape_t;
typedef double (*getter)(void *);
typedef enum {Rect, Circle} Shape_l;

struct shape {
	Shape_l type;
    getter get_area;
};

#endif // _BASE_H_