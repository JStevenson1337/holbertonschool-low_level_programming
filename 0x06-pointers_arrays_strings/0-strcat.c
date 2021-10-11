#include "holberton.h"
/**
 * _strcat - append a strin to another string
 * @src: source srting(s)
 * @dest: Destination String
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	while (dest[j] != '\0')
	{
		src[i] = dest[j];
		i++;
		j++;

	}
	dest[i] = '\0';
	return (dest);
}
