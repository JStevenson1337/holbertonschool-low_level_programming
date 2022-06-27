#include "search_algos.h"
/**
 * ID_Val - find the value in the array
 * @array: array to search
 * @value: value to find
 * @left: left index
 * @right: right index
 * Return: index or -1 if not found
 */
int ID_Val(int *array, int left, int right, int value)
{
	int i, mid;

	mid = left + (right - left) / 2;
	if (left == right)
	{
		if (value < array[left] || value > array[right])
		{
			printf("Searching in array: %d\n", array[mid]);
			return (-1);
		}
		return (left);
	}
	printf("Searching in array:");
	for (i = left; i <= right; i++)
	{
		if (i != right)
			printf(" %d,", array[i]);
		else
			printf(" %d\n", array[i]);
	}

	if (array[mid] < value)
		return (ID_Val(array, mid + 1, right, value));
	else
		return (ID_Val(array, left, mid, value));
}

/**
 * advanced_binary - advanced_binary sorting algorithm
 * @array: array of integers
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (ID_Val(array, 0, size - 1, value));
}
