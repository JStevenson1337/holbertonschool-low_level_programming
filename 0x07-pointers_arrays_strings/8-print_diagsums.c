#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function start
 * @a: String passed in
 * @size: size of array
 * Description: prints the sum of the two diagonals of a square matrix
 * Return: results
 */
void print_diagsums(int *a, int size)
{
	int l;
	int y = 0;
	int sumlr = 0;
	int sumrl = 0;

	for (l = 0; l < size; l++)
	{
		sumlr += a[y];
		y++;
		a = a + size;
	}
	a = a - (size * l);
	printf("%d, ", sumlr);
	y = size - 1;
	for (l = 0; l < size; l++)
	{
		sumrl += a[y];
		y--;
		a = a + size;
	}
	printf("%d\n", sumrl);
return;
