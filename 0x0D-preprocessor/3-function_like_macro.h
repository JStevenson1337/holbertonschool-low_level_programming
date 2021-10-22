#ifndef FUNCTION_LIKE_MACRO_H
#include <stdio.h>
#define FUNCTION_LIKE_MACRO_H
#define ABS(x) ((x < 0) ? (-x) : (x))
/*
#define ABS(x) ({ \
    typeof(x) x = (x); \
    x < 0 ? -x : x ; \
    })
*/
#endif
