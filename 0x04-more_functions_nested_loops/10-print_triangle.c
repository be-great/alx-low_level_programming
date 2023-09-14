#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * followed by a new line.
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i = 0;

	while (i < size)
	{
		/* print the space it's reverse for loop only*/
		int space = size;

		while (space > i + 1)
		{
			_putchar(' ');
			space--;
		}
		/* print the # it's normal for loop */
		int hash = 0;

		while (hash <= i)
		{
			_putchar('#');
			hash++;
		}
		_putchar('\n');
		i++;
	}

}
