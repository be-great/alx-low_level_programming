#include "main.h"

/**
 * print_number - function that PRINTS an integer
 * @n:  number to print
 */

void print_number(int n)
{
	if (n < 0)
	{
	n = n * -1;

	_putchar('-');
	}
	if (n / 10 > 0)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
