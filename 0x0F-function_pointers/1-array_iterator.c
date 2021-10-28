#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given on each element of an array
 * @array: input array pointer
 * @size: size of ointer
 * @action: input function
 * Description: prints out as it iterates thru function it points 2
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if ((!array) || (!size) || (!action))
	{
		return;
	}
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
return;
}
