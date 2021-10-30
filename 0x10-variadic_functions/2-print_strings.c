#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to print between strings
 * @n: number of strings passed to function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *point;

	va_list vl;

	va_start(vl, n);

	for (x = 0 ; x < n ; x++)
	{
		point = va_arg(vl, char *);
		if (point == NULL)
			printf("(nil)");
		else
			printf("%s", point);

		if (x < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(vl);
}
