#include "main.h"
/**
 * print_rev - Function Start
 *	Description: Prints Text passed in from str
 *	@str: stringpointer  passed into function
 * Return: Void
 */

void print_rev(char *str)
{
	while (*str != '\0')
	{
		str++;
	}
	str--;
	while (*str != '\0')
	{
		_putchar(*str);
		str--;
	}
	_putchar('\n');
}
