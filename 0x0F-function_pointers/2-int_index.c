#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 *
 *
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int *p;

	p = &array[i];

	if (array == NULL || cmp == NULL)
	{
		return -1;
	}

	if (size <= 0)
	{
		return (-1);
	}
	do {
		i = rand() % size;
		p = array + i;
		return (*p);
	} while (cmp(*p) == 0);

	return 0;
}

