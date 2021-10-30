#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - add all arg
 * @n: number of args
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	int i, s;

	va_start(vl, n);
	s = 0;

	for (i = 0; i < n; i++)
	{
		s += va_arg(vl, int);
	}

	va_end(vl);

	return (s);
}

