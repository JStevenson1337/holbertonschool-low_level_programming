#include "main.h"
/**
 * print_most_numbers - prints
 * Description: print numbers 0-9 negating 2,4
 * Return: void
 */
void print_most_numbers(void)
{
	int i;


	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			{
				_putchar(i);
			}
			else
			{
				continue;
			}
		}
		_putchar('\n');
	}

