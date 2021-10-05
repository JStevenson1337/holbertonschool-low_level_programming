#include "main.h"
/**
 * print_square - function start
 * Description: Prints a line based
 * @size:variable
 * Return: void
 */
void print_square(int size)
{
int square, line;

if (size <= 0)
	_putchar('\n');
for (square = 0; square < size; square++)
{
	for (line = 0; line < size; line++)
	{
		_putchar('#');
	}
	_putchar('\n');
}
}
