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

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

