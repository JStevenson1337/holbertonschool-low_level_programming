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

	while (*dest != '\0')
	{
		dest++;
		i++;
	}
	while (*src != '\0')
	{
		*(dest++) = *(src++);
		j++;
	}
	dest = dest - (i + j);
	return (dest);
}
