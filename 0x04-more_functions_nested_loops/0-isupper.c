#include "main.h"

/**
 * _isupper -checks for upper case chars
 * @c: vairable to test against bool
 * Returns: 1 if c uppercase
 */
int _isupper(int c)
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
