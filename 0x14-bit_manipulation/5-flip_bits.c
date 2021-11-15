#include "main.h"
unsigned int counting_bits(unsigned int a);
/**
 * flip_bits - a function that returns the number of bits/
 * you would need to flip to get from one number to another
 * @n:first num
 * @m: second num
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (counting_bits(n ^ m));
}
/**
 * counting_bits - counts the number of bits
 * @a: integer
 * Return: Count
 */
unsigned int counting_bits(unsigned int a)
{
	int count = 0;

	while (a > 0)
	{
		count++;
		a &= (a - 1);
	}
	return (count);
}

