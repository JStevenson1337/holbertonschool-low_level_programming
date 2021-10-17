#include "main.h"
/**
 * _strncat - function start
 * @src: source string(s)
 * @dest: Destination String
 * @n: number of bytes
 * Description: append a string to another
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int j = 0;
	int i = 0;

	while (*dest != '\0')
	{
		dest++;
		j++;
	}
	while ((*src != '\0') && (i < n))
	{
		i++;
		*(dest++) = *(src++);
		j++;
	}
	dest = dest - j;
	return (dest);
}

