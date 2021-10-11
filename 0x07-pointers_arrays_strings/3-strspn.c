#include "main.h"
/**
 * _strspn - function start
 * @s: String passed in
 * @accept: comparison string
 * Description: function that gets the length of a prefix substring
 * Return: count not matching
 */
unsigned int *_strspn(char *s, char *accept)
{	int i, j = 0;
	char *a = accept;

	while (*s != '\0')
	{
		if (*s != *a)
		{
			a++;
			s++;
			j++;
		}
		i++;
		s++;
	}
	return (j);
}

