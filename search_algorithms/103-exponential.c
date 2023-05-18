#include "search_algos.h"

int exponential_search(int *array, size_t size, int value)
{
    int left_index = 1;
    int right_index;
    int size_end = size;

    if (!array || !size)
        return (-1);

    while (left_index < size_end && array[left_index] < value)
    {
        printf("Value checked array[%d] = [%d]\n", left_index, array[left_index]);
        left_index *= 2;
    }

    right_index = minimum(left_index, size - 1);
    left_index /= 2;
    printf("Value found between indexes [%d] and [%d]\n", left_index, right_index);
    return (truncated_search(array, left_index, right_index, value));
}

int truncated_search(int *array, int left_index, int right_index, int value)
{
    int i;
    int mid;

    if (!array || left_index > right_index)
        return (-1);

    while (left_index <= right_index)
    {
        mid = left_index + (right_index - left_index) / 2;
        printf("Searching in array: ");
        for (i = left_index; i < right_index; i++)
            printf("%d, ", array[i]);
        printf("%d\n", array[i]);

        if (array[mid] > value)
            right_index = mid - 1;
        else if (array[mid] < value)
            left_index = mid + 1;
        else
            break;
    }

    if (array[mid] == value && (left_index <= right_index))
        return (mid);
    else if (left_index == right_index && array[right_index] == value)
        return (right_index);

    return (-1);
}

size_t minimum(size_t x, size_t y)
{
    if (x < y)
        return (x);

    return (y);
}