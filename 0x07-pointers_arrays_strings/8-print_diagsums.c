#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function start
 * @s: String passed in
 * @size = size of array
 * Description: prints the sum of the two diagonals of a square matrix
 * Return: results
 */
void print_diagsums(int *a, int size)
{
	int iter, i = 0, d1 = 0, d2 = 0;

	for (iter = 0; iter < size; iter++)
	{
		i = (iter % size);
		d1 += *(a + i + (i * size));
		d2 += *(a + i + ((size - 1 - i) * size));
	}
	printf("%d, %d\n", d1, d2);
}

