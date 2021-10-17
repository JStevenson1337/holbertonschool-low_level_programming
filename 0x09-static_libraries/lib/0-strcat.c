#include "main.h"
/**
 * _strcat - append a strin to another string
 * @src: source srting(s)
 * @dest: Destination String
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (*dest)
	{
		dest++;
		i++;
	}
	while (*src)
	{
		src++;
		*(dest++) = *(src++);
		i++;
	}
	dest = dest - i;
	return (dest);
}
