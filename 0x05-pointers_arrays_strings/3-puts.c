#include "main.h"
/**
 * _puts - Function Start
 *	Description: Prints Text passed in from str
 *	@str: string passed into function
 * Return: Void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
