#include "main.h"

/**
 * print_numbers - function that prints number from 0-9
 * followed by a new line.
 */

void print_numbers(void)
{
	int j = 0;

	while (j < 10)
	{
		_putchar(j + '0');
		j++;
	}
	_putchar('\n');

}
