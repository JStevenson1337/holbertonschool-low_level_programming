#include "main.h"
/**
 * _memset - function start
 * @s: pointer to memory location
 * @b: constant bytes
 * @n: number of bytes
 * Decsription: function that fills memory with a constant byte.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);

}
