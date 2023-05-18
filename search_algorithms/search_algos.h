#ifndef __SEARCH_ALGOS__
#define __SEARCH_ALGOS__

#include <stdio.h>



int interpolation_search(int *array, size_t size, int value);

int exponential_search(int *array, size_t size, int value);
int truncated_search(int *array, int left_index, int right_index, int value);
size_t minimum(size_t x, size_t y);

#endif /* __SEARCH_ALGOS__ */