#include "search_algos.h"

/**
 * interpolation_search - search via interpolation
 * @array: pointer to array
 * @size: array size
 * @value: search value
 * Return: value || -1 if null or not found
 **/
int interpolation_search(int *array, size_t size, int value)
{
	double begin, finish, insert;
	size_t pos, end, start = 0;

	if (!array || !size)
		return (-1);

	for (end = size - 1, start = 0; start != end;)
	{
		begin = (double)array[start];
		finish = (double)array[end];
		insert = (value - begin) / (finish - begin);
		pos = insert * (end - start) + start;

		printf("Value checked array[%d] ", (int)pos);
		if (pos > size - 1)
		{
			printf("is out of range\n");
			return (-1);
		}
		printf("= [%d]\n", array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] > value)
			end = pos - 1;
		else if (array[pos] < value)
			start = pos + 1;
	}

	if (array[start] == value)
		return (start);

	return (-1);
}