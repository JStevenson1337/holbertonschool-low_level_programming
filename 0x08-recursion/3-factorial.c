#include "main.h"
/**
 * factorial - function start
 * Description: Returns the factorial of a given number
 * @n:  given number
 * Return: -1 || 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n  * factorial(n-1);
	}

}
