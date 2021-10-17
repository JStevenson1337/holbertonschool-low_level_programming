#include "main.h"

/**
 * _isupper - Checks for uppercase letters
 * Description: checks for upper case chars
 * @c: vairable to test against bool
 * Return: 1 if true else 0
 */
int _isupper(int c)	/* Checks for an uppercase char */
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
