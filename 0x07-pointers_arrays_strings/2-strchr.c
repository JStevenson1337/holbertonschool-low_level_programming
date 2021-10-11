#include "main.h"
/**
 * _strchr - function start
 * @s: String passed in
 * @c: Character to ofind
 * Description: find a char in a given string
 * Return: strin if found; else NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	while (*s)
	{
		if (*s == c)
		{
			s++;
			return (s);
		
		else
			return (s);

	}
	if (c == '\0')
	return (s);

	return (NULL);
}
