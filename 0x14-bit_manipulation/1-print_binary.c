#include "main.h"

int countNums(unsigned int n);
/**
 * @brief  Prints a binary number
 * @param  n: Number to be printed
 * @retval None
 */
void print_binary(unsigned long int n)
{
	unsigned i;
    for (i = 1 << countNums(n); i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");

}

int countNums(unsigned int n)
{
	unsigned int count = 0;
	while(n != 0)
	{
		n = n/10;
		count++;
	}
	return count;
}
