#include "main.h"
/** @
 * array_range - function start
 * @min: minimum value passed in
 * @max: maximum value passed in
 * return: array of integers
 */
int *array_range(int min, int max)
{
	int *arr = malloc(sizeof(int) * (max - min + 1));

	int i;

	for (i = 0; i < max - min + 1; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
