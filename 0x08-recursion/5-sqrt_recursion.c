#include "main.h"
/**
 * est- function start
 * @n: original input varable
 * @x: estimate variable
 * Description: natural square root of a number
 * Return: square root or -1 conditional catch all
 */
int est(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	return (est(n, x + 1));
}
#include "main.h"
/**
 * _sqrt_recursion- finds the square root of a number
 * @n: input variable
 * Return: calculates the square root of a number
 */
int _sqrt_recursion(int n)
{
	int x = 1;

	return (est(n, x));
}