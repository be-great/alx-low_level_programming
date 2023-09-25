#include "main.h"

/**
 * print_chessboard - prints a chessboard (2d) array
 * @a: the 2d array
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (i < 8)
	{
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}

