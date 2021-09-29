#include "main.h"
void print_alphabet_x10(void)
{
	char _a;
	int i;
	i = 0;
	while (i < 11)
	{
		for (_a = 'a'; _a <= 'z'; _a++)
		{
			_putchar(_a);
		}
		_putchar('\n');
	}
	return;

}
