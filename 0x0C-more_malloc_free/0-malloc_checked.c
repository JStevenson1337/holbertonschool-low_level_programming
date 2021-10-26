#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: the buffer to allocate
 * Return: the pointer to the allocated memory
 *
 */
void *malloc_checked(unsigned int b)
{
	void *p;
		p = malloc(b);
	if (p == NULL)
	{
		exit(1);
	}
	return (p);
}
