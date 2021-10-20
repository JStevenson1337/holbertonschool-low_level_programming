#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function start
 * @size: of bytes to allocate
 * @c: char passed from constructor
 * Return: ptr
 * Description: initializes an array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size * sizeof(char));


	if (size == 0 || ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
