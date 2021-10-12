#include "main.h"
/**
 * _strspn - function start
 * @s: String passed in
 * @accept: comparison string
 * Description: function that gets the length of a prefix substring
 * Return: count not matching
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			{
				if (accept[j] == s[i])
				{
					break;
				}
			}
			if (accept[j] == '\0')
			{
				return (i);
			}
	}
	return (i);

}
