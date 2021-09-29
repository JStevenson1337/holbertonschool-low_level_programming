#include <stdio.h>
/*
 *Write a program that prints the alphabet in
 *lowercase, and then in uppercase, followed by a new line.
 */
/**
 *main- prints the alphabet in both upper and lower case
 *
 *Return: 0
 */
int main(void)
{
	char  _a, _A;

	for (_a = 'a'; _a <= 'z'; _a++)
	{
		putchar(_a);
	}

	for (_A = 'A'; _A <= 'Z'; _A++)
	{
		putchar(_A);
	}
	putchar('\n');
	return (0);
}

