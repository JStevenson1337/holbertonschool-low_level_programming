#include "main.h"

/**
 * _strcmp - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * Description: compare 2 strings
 * Return: string diff
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 - *s2 == 0)
	{
		s1++;
		s2++;
	}
	/* now return the difference */
	return (*s1 - *s2);
}
