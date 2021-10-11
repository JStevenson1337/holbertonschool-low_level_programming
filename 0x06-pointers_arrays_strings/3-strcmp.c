#include "holberton.h"

/**
 * _strncat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * Description: compare 2 strings
 * Return: string diff
 */
int _strcmp(char *s1, char *s2)
{
	do {
		++s1;
		++s2;
	} while (*s1 && *s2);

	return (*s1 - *s2);
}
