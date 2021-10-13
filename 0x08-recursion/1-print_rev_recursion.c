#include "main.h"
/**
 * _rev_recursion - function start
 * @s: string to be evaluated
 * Desctiption: prints a string in reverse
 * return string(reversed)
 */
int _strlen_recursion(char *s);
{

	if (*s  == '\0')

	{
		return (0)

	}

	else

	{
	   return (1 + _print_rev_recursion(s + 1));

	}
}



