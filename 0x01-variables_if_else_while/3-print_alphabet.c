#include<stdio.h>
/**
 * main prints a-z &&  A-Z
 *
 * Return: 0
 */
int main(void)
{

	char _a,_A;

	for (_a = 'a'; _a <= 'z'; _a++)
	{
		putchar(_a);
	}

	for (_A = 'A'; _A <= 'Z'; _A++)
	{
		putchar(_A);
	}
	putchar ('\n');
	return (0);

}
