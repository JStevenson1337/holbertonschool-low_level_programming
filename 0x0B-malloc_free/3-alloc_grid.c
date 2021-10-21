#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  alloc_grid - prints a grid of integers
 * Description: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the allocated array.
 */
int **alloc_grid(int width, int height)
{
	int len=0;
    int *ptr, **arr;
    int count = 0,i,j;

    len = sizeof(int *) * width + sizeof(int) * height * width;
    arr = (int **)malloc(len);


    ptr = (int *)(arr + width);

	if (arr == NULL)
	{
		return (NULL);
	}
	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}


    for(i = 0; i < width; i++)
	{
        arr[i] = (ptr + height * i);
	}

    for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			arr[i][j] = count;
		}
	}


	return (arr);
}
