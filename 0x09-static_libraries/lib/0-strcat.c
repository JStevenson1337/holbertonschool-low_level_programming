#include "holberton.h"
/**
 * _strcat - append a strin to another string
 * @src: source srting(s)
 * @dest: Destination String
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int start = 0;

	while (*dest)
	{
		dest++;
		start++;
	}
	while (*src)
	{
		src++;
		*(dest++) = *(src++);
		start++;
	}
	dest = dest - start
	return (dest);
}
