#include "main.h"
/**
 * main - print the alphabet 10x
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char _a;
	int i;
	i = 0;
	while (i < 10)
	{
		for (_a = 'a'; _a <= 'z'; _a++)
		{
			_putchar(_a);
		}
		_putchar('\n');
		i++;

	}
	return;

}
