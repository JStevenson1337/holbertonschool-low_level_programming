#include "main.h"
/**
 * _pow_recursion - calculate x^y
 * @x: number
 * @y: exponent
 * Return: returns num^
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	x *= _pow_recursion(x, y - 1);
	return (x);
}