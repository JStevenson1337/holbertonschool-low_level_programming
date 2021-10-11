nclude "holberton.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings together
 * @s1: the destination string
 * @s2: the string part we are adding to dest
 * Return: integer positive if s1 is sooner alphabetically, negative if later
 */
int _strcmp(char *s1, char *s2)
{

	/* keep going through the letters while they are the same */
	while (*s1 != '\0' && *s2 != '\0' && *s1 - *s2 == 0)
	{
		s1++;
		s2++;
	}
	/* now return the difference */
	return (*s1 - *s2);
}