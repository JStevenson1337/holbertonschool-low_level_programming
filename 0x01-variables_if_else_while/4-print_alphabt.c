#include<stdio.h>
/*
 * Write a program that prints the alphabet
 *in lowercase, followed by a new line.
 */

 /**
 *
 * main - prints the alphabet
 *omitting q e
 *
 *Return: 0
 *
 */
int main(void)
{

	char _a;

	for (_a = 'a'; _a <= 'z'; _a++)
	{
		if (_a != 'q' && _a != 'e')
		putchar(_a);
	}
	putchar('\n');
	return (0);

	}
