#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *str);
/**
 * str_concat - function start
 * @s1: string 1
 * @s2: string 2
 * Description: concatenates two strings together
 * Return: pointer to new concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	char *ptr = malloc(sizeof(char) * (len1 + len2) + 1);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		ptr[len1 + i] = s2[i];
	ptr[len1 + i] = '\0';
	return (ptr);
}
/**
 * _strlen - allocates space in memory and copies given string to it
 * @str: string to copy in
 *
 *
 * Return: length
 */
int _strlen(char *str)
{
	int i = 0;

	do {
		++i;
	} while (*(str + i) != '\0');
	return (i);
}
