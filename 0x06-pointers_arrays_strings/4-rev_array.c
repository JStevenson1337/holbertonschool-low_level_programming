#include "holberton.h"
#include <stdio.h>
/**
 * reverse_array - reverses an array of integers
 *
 * @a: the array of integers
 * @n: the number of elements in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int *c = a;
	int temp;
	int start = 0;
	int end = n - 1;


	while (start < end)
	{
		temp = c[start];
		c[start] = c[end];
		c[end] = temp;
		start++;
		end--;
	}
}
