#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to check
 * @index: the index of the bit to check
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
	return ((n >> index) & 1);
	}
}
