#include "search_algos.h"
/**
 * advanced_binary - advanced_binary sorting algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value to sort by
 * Return: Value or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i;
	int temp, mod2;

	if (!array || !size)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
		printf("%d%s", array[i], i + 1 == size ? "\n" : ", ");
	mod2 = (size % 2);
	size /= 2;
	i = size - (size > 0 && !mod2);

	if (array[i] == value)
	{
		if (i == 0)
			return (i);
		return (advanced_binary(array, i + 1, value));
	}

	if (array[i] > value)
		return (advanced_binary(array, i, value));
	temp = advanced_binary(array + i + 1, size, value);
	if (temp == -1)
		return (-1);
	return (size + mod2 + temp);
}
