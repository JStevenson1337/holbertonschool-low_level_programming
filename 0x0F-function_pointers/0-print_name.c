#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - Prints a string
 * @name: name pointer passed in
 * @f: function passed in
 * @char*: string passed into function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
