#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * Description: Prints a line
 * @n:variable
 * Return: void
 */

void print_diagonal(int n)
{
int dash, space;

if (n <= 0)
	_putchar('\n');
for (dash = 0; dash < n; dash++)
{
	for (space = 0; space < dash; space++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
}
}
