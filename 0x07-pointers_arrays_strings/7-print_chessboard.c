#include "main.h"
#include <studio.h>

/**
 * print_chessboard - Print a chess board like output
 * @a: 2d array of X * X
 *
 * Return: void
 */


void print_chessboard(char (*a)[8]);
{
	int b,c;

	b = 0;
	while (b < 8)
	{
		c = 0;
		while (c < 8)
		{
			_putchar(a[b][c]);
			c++
		}
		b++;
	}

	if (a < 8)
	{
		_putchar('\n');
	}
}
