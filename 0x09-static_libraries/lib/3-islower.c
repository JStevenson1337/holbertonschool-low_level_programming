#include "main.h"
/**
 *  _islower - Finds the lower number
 *  @c: variable to be checked
 *
 *  Return: 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
