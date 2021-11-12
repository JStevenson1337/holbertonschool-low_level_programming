#include "main.h"
/**
 * @brief  Main program
 * @param  None
 * @retval None
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	while (*b)
	{
		result = result * 2 + (*b++ - '0');
	}
	return result;
}
