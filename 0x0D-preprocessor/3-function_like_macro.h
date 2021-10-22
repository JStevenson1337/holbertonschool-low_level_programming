#ifndef FUNCTION_LIKE_MACRO_H
#endif

#define FUNCTION_LIKE_MACRO

#define ABS(x) ({ \
    typeof(x) x = (x); \
    x < 0 ? -x : x ; \
    })
#endif
