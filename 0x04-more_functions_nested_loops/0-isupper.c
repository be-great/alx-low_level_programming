#include "main.h"

/**
 * print_square - function that prints a square
 * followed by a new line.
 * @size: size of the triangle
 */

void print_square(int size)
{
	int i = 0;
	int hash = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i < size)
	{

		/* print the # it's normal for loop */
		while (hash < size)
		{
			_putchar('#');
			hash++;
		}
		_putchar('\n');
		hash = 0;
		i++;
	}


}
