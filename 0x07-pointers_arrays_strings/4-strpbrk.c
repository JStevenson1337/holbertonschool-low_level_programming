# include "main.h"
/**
 * _strpbrk - function start
 * @s: begin string
 * @accept: comparison string
 * Description: "function that searches a
 * * string for any of a set of bytes."
 * Return: Return value is char
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	while (!*s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
