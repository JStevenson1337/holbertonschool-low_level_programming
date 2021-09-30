# include "main.h"
/**
 * *  print_last_digit - Prints last digit of n
 * * @n: vairable to check condition
 * * Description: The above
 * * Return: Value computed to be the last digit of n
 */

int print_last_digit(int n)
{
	n = n % 10;
	if (n >= 0)
	{
	_putchar('0' + n);
	}
	else if (n < 0)
	{
	n = n * -1;
	_putchar('0' + n);
	}
	return (n);
}
