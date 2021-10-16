#include "main.h"
/**
 * print_chessboard - function start
 * @a: array of data passed in
 * Description: Print Chessboard
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int l;
	int n;

	for (l = 0; l < 8; l++)
	{
		for (n = 0; n < 8; n++)
		{
			_putchar(a[l][n]);
			if (n == 7)
			{
				_putchar('\n');
			}
		}
	}
return;
}
