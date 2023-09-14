#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * followed by a new line.
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i = 0;
	int space = size;
	int hash = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i < size)
	{
		/* print the space it's reverse for loop only*/
		while (space > i + 1)
		{
			_putchar(' ');
			space--;
		}

		/* print the # it's normal for loop */
		while (hash <= i)
		{
			_putchar('#');
			hash++;
		}
		_putchar('\n');
		space = size;
		hash = 0;
		i++;
	}

}
