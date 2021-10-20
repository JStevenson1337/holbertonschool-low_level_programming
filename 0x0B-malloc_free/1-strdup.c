#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
/**
 *
 *
 *
 */
char *_strdup(char *str)
{

	int len = _strlen(str); 
	char* dupstr = (char*) malloc ((len) * sizeof(char));

	if (dupstr == NULL)
	{
		return (NULL);
	}
	else
	{
		dupstr = (char*) _memcpy(dupstr, str, len);
	}

	return (dupstr);
}

int _strlen(char *str)
{
    int n = 0;

    while (str[n] != '\0')
	{
		n++;
	}
    return (n);
}

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
