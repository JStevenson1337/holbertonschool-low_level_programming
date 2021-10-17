#include "main.h"
/**
 * _strchr - function start
 * @s: String passed in
 * @c: Character to find
 * Description: find a char in a given string
 * Return: string if found; else NULL
 */
char *_strchr(char *s, char c)
{
	do {
		if (!*s++)
		{
			return ('\0');
		}
	} while (*s != (char) c);
	return ((char *)s);
}
