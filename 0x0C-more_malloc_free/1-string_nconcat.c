#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/** @
 * 
 * 
 * 
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	while(*s1++)
	{
		if (n > 0 && n >= strlen(s2))
			{
			str = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
			strcpy(str, s1);
			strcat(str, s2);
			return (*str);
		}
		else if (n > 0 && n < strlen(s2))
		{
			str = malloc(sizeof(char) * (strlen(s1) + n + 1));
			return (*str);
		}
		else
			return (NULL);
	}

	return (*str);
