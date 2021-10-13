#include "main.h"
/**
 * _strlen_recursion - function start
 * Description: rtn Length of a str
 * @s: string to be evaluated
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
		return (i + _strlen_recursion(s + 1));
	return (0);
}
