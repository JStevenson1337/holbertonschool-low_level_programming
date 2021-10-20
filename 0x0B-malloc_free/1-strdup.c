#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * _strdup - allocates space in memory and copies given string to it
 * @str: string to copy in
 *
 *
 * Return: a pointer to allocated memory / NULL if str = NULL / insufficent mem
 */
char *_strdup(char *str)
{
	int len = _strlen(str);
	char *dupstr = (char *str) malloc((len) * sizeof(char));

	if (dupstr == NULL)
	{
		return (NULL);
	}
	else
	{
		dupstr = (char *) _memcpy(dupstr, str, len);
	}
	return (dupstr);
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
	int n = 0;

	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

/**
 * _memcpy - function start
 * @dest: Pointer Destination
 * @src: Pointer source
 * @n: number of bytes to copy
 * Return: Dest pointer
 * Description: copies memory between pointers
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (i = 0; i < n; i++)
	{
		cdest[i] = csrc[i];
	}

	return (dest);
}
