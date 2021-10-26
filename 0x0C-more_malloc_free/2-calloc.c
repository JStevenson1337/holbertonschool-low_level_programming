#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @size: size of the array
 * @nmemb: Number of elements
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return NULL;
	}
	memset(ptr, 0, nmemb * size);

	return (ptr);

}
