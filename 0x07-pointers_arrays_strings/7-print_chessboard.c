#include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, n;

	for (i = 0; i < 8; i++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[i][n]);
		_putchar('\n');
	}
}
