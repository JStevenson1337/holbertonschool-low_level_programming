#include "main.h"
/**
 * _abs - Find the absolute value of an integer
 * @n: number to check
 *
 * Return: 0
 */
int _abs(int n)
{


	if (n < 0)
	{
		n = n * -1;
	}
	else
	{
		_putchar(n);
	}
	return (0);
}
