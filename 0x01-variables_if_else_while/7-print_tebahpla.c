#include<stdio.h>
/*
 * Write a program that prints the lowercase alphabet in reverse, followed  * *by a new line.
 */
/**
 *main - print alphabet backwords
 *
 *Return: 0 if runs succesful
 */
int main(void)
{
	char _a;
	for (_a = 'z'; _a >= 'a'; _a--)
		putchar(_a);
	putchar('\n');
	return (0);
}
