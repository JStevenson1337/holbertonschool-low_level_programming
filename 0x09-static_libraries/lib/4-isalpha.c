#include "main.h"
/**
 *  _isalpha - Check to see if an input is an english character
 *  @c: Variable to check condition
 *
 *  Return: 1 if true
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
