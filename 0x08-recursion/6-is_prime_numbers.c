#include "main.h"
/**
 * find_prime- determines if prime
 * @n: input variable
 * @x: test number
 * Return: 1 prime | 0 not prime
 */
int find_prime(int n, int x)
{
	if (x == n)
	{
		return (1);
	}
	else if (n % x == 0)
	{
		return (0);
	}
	return (find_prime(n, x + 1));
}
/**
 * is_prime_number- calculates if num is prime
 * @n: input
 * Return: 1 prime | 0 not prime
 */
int is_prime_number(int n)
{
	int x = 2;

	if (n <= 1)
	{
		return (0);
	}
	return (find_prime(n, x));
}