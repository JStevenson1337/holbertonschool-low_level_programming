#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/* betty style doc for function main goes there */
/**
 * main - generates a random number n
 * %10 to locate the last digit.
 *
 * Return: 0
 */
int main(void)
{
	int n, o;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	o =  n % 10;

	if (o > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, o);
	}
	else if (o == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, o);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, o);
	}
	return (0);
}
