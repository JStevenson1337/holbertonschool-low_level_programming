#include "main.h"
/**
 * main - prints every minute of the day
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int h, m, s =0;

	while (h >= 24)
	{
		while (m > 60)
		{
			while (s > 60)
			{
				_putchar(s);
				s++;
			}
		m++;
		_putchar(m);
		}

	_putchar(h);
	h++;
	}
	_putchar(h);
	_putchar(m);
	_putchar(s);
	_putchar('\n');
}

