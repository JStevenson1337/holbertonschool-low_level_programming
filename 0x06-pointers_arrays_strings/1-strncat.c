#include "holberton.h"
/**
 * _strncat - function start
 * @src: source srting(s)
 * @dest: Destination String
 * @n: number of bytes
 * Description: append a string to another
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}

