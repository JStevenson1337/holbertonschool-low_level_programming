// #include "main.h"
/**
 * _strcpy- function start
 * @dest: destination 
 * @src: source string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int i;

	while (*src != '\0')
	{
		src++;
		l++;
	}
	src = src - l;
	for (i = 0; i <= l; i++)
	{
		*(dest++) = *(src++);
	}
	for (i = 0; i <= l; i++)
	{
		dest--;
	}
return (dest);
}

// #include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}
