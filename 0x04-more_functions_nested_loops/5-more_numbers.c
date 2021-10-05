#include "main.h"
/**
 * more_number - Function Prints 0-14 10x
 *	
 * Return: void
 *
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <=  14; j++)
		{
			if (j / 10 > 0)
			{
				_putchar((j / 10) + '0');
			}
				_putchar((j % 10) + '0');
			}
		_putchar('\n');
	}
}


