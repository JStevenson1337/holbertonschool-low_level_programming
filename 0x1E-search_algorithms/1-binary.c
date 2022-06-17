#include "search_algos.h"

/**
 * binary_search - searches for a value in
 * a sorted array of integers
 *
 * @array: pointer to array
 * @size: length of array
 * @value: search item
 *
 * Return: value on success || -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	size_t i;

	if (!array || !size)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
		printf("%d ", array[i]);
	printf("\n");

	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
