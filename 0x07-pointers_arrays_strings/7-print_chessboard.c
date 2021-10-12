#include "main.h"
/**
 * print_chessboard - function start
 * @a: array of data passed in
 * Description: Print Chessboard
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, j;
	const unsigned int e = 8;


	for (i = 0; i < e; i++)
	{
		for (j = 0; j < e; j++)
			_putchar(*(*(a + i) + j));
		_putchar('\n');
	}
}