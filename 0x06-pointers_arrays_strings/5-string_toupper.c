#include "holberton.h"
/**
 * string_toupper - Function Start
 * @str: string to convert
 * Description: converts lower care to uppercase
 * Return: str
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
		str[i] = str[i] - 32;
		}
		str++;
	}
	str = str - i;
	return (str);
}
