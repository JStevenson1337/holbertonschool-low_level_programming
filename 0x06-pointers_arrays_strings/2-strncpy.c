#include "holberton.h"
/**
 * _strncpy - function start
 * @dest: destination string
 * @src: source string
 * @n: counter
 * Destination: copy a string to another location
 * Return: Destinatin string
 */
char *_strncpy(char *dest, char *src, int n)
{
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

