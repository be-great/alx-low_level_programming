#include "main.h"

/**
 * print_diagonal - function that prints a diagonal
 * followed by a new line.
 * @n: number of interation
 */

void print_diagonal(int n)
{
	int i = 0;
	int hash = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i < n)
	{

		/* print the # it's normal for loop */
		while (hash < i)
		{
			_putchar(' ');
			hash++;
		}
		_putchar('\\');
		_putchar('\n');
		hash = 0;
		i++;
	}


}
