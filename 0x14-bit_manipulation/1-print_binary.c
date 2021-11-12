#include "main.h"

int countNums(unsigned int n);
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i;

	int count = countNums(n);

	if (n == 0)
	{
		printf("0");
	}
	else
	{
		for (i = count - 1; i >= 0; i--)
		{
			if (n & (1 << i))
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
	}
}

/**
 * countNums - counts the number of bits in a number
 * @n: number to be counted
 * Return: number of bits
 */
int countNums(unsigned int n)
{
	int count = 0;

	while (n)
	{
		count++;
		n >>= 1;
	}
	return (count);
}
