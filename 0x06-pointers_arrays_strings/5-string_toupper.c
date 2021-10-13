#include "holberton.h"
/**
 * string_toupper - Function Start
 * @str: string to convert
 * Description: converts lower care to uppercase
 * Return: str
 */
char *string_toupper(char *str)
{

	int x = 0;

	while (*(str + x) != '\0')
	{
		if (*(str + x) >= 97 && *(str + x) <= 122)
			*(str + x) = (*(str + x) - 32);
		x++;
	}
	return (str);
}
