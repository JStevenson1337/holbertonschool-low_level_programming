#include "main.h"
/**
 * _strlen_recursion - function start
 * Description: returns Length of a str
 * @s: string to be evaluated
 * Return: 0
 */
int _strlen_recursion(char *s)
{


	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s++));
	}
}
