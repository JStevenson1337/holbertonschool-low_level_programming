#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints all the things
 * @fonrmat: anything
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;

	char *str, form;
	int x = 0;

	va_start(args, format);
	while (format != NULL && format[x] != '\0')
	{
		form = format[x];
		switch (form)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				break;
		}
		if (format[x + 1] != '\0' &&
			(form == 'c' || form == 'f' || form == 'i' || form == 's'))
			printf(", ");
		x++;
	}
	printf("\n");
	va_end(args);
}

