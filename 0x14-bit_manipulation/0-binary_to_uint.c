#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	while (*b)
	{
		if (*b == '1')
			result = result * 2 + 1;
		else if (*b == '0')
			result = result * 2;
		else
			return (0);
		b++;
	}

	return (result);

}

