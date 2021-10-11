#include "holberton.h"
/**
 * _strcat - append a strin to another string
 * @src: source srting(s)
 * @dest: Destination String
 * @n: number of bytes
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
