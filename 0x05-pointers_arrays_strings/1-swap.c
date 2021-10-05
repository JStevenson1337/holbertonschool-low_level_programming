#include "main.h"
/**
 * swap_int - Function Start
 * Description: swaps the values of 2 integers
 * @a: var 1
 * @b: var 2
 *
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
