#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/* betty style doc for function main goes there */
/**
 * main - generates a random number n
 * %10 to locate the last digit.
 *
 * Return: n and LD afer expression evaulation
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	int LD = n % 10;

	if (LD > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, LD);
	}
	else if (LD == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, LD);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LD);
	}
	return (0);
}
