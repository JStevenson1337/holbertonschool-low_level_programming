# include <stdio.h>
/*
 * Write a program that prints all possible different
 * combinations of two d *i *gits.
 */

/**
 *main - putchar single digit combos
 *Return: 0
 */
int main(void)
{
	int a;

	a = '0';
	while (a <= '9')
	{
		putchar(a);
		if (a <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}

