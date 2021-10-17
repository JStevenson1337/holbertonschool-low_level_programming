#include "main.h"
/**
 * _memcpy - function start
 * @dest: Pointer Destination
 * @src: Pointer source
 * @n: number of bytes to copy
 * Return: Dest pointer
 * Description: copies memory between pointers
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (i = 0; i < n; i++)
		cdest[i] = csrc[i];

	return (dest);
}
