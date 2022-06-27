#ifndef __ALGOS_H__
#define __ALGOS_H__

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

int advanced_binary(int *array, size_t size, int value);
int ID_Val(int *array, int left, int right, int value);

#endif /* __ALGOS_H__ */
