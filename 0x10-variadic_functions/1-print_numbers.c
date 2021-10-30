#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints all arg
 * @n: number of args
 * @separator: string printed between numbers
 * Return: result
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i = 0;

	va_start(vl, n);

	while (i < n)
	{

		if (separator == NULL )
		{
			printf("%d", va_arg(vl, int));
		}
		printf("%d%s", va_arg(vl, int), separator);
	}
	printf("\n");
}


