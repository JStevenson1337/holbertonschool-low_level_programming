#include "holberton.h"
/**
 * _strncat - function start
 * @src: source srting(s)
 * @dest: Destination String
 * @n: number of bytes
 * Description: append a string to another
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int start = 0;
	int count = 0;

	while (*dest)
	{
		dest++;
		start++;
	}
	while ((*src) && (count < n))
	{
		src++;
		*(dest++) = *(src++);
		start++;
	}
	*(dest + 1) = '\0';
	return (&(*dest));
}

