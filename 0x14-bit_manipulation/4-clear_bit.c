#include "main.h"
/**
 * clear_bit - clear the bit at a given index
 * @n: the number to be modified
 * @index: the index of the bit to be cleared
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (0);
}
