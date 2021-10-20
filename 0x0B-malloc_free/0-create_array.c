#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Create a array object
 * @param size of bytes to allocate
 * @param c: char passed from constructor
 * @return ptr*
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size * sizeof(char));


	if (size == 0 || ptr == NULL)
		return (NULL);

	for (c[i] = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
