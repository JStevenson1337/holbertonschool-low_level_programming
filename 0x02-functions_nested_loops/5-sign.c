#include "main.h"
/**
 * print_sign - Print the sign of a number
 * @n: integer to be checked
 * Return: 1 if +
 *
 *
 */
int print_sign(int n)
{

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
