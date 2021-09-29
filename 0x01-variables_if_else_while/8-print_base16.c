#include<stdio.h>
/*
 *program that prints all the numbers of base 16 in lowercase
 *, followed by a* * new line.
 *I/

 /**
 *main - printing hex a-f base 16
 *
 *Return: 0
 */
int main(void)
{
	int i;
	char c;
	for (i - 0; i < 10; i++)
		putchar((i % 10) + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');


	return (0);
}
