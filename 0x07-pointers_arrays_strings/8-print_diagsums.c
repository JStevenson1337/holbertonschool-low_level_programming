#include "main.h"
#include <stdio.h>

/**
 * _strspn - function start
 * @s: String passed in
 * @accept: comparison string
 * Description: function that gets the length of a prefix substring
 * Return: count not matching
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

 int main(void)
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums((int *)c3, 3);
    print_diagsums((int *)c5, 5);
    return (0);
}