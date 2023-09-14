#include "main.h"

/**
 * print_most_numbers - function that prints number from 0-9
 * except 2,4
 * followed by a new line.
 */

void print_most_numbers(void)
{
	int j = 0;

	while (j < 10)
	{
		if ((j == 2) || (j == 4))
			j++;
		_putchar(j + '0');
		j++;
	}
	_putchar('\n');

}
