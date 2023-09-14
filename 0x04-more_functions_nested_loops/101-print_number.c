#include "main.h"

/**
 * print_number - function that PRINTS an integer
 * @n:  number to print
 */

void print_number(int n)
{
	int num = n;
	if (n < 0)
	{
	num = num * -1;

	_putchar('-');
	}
	if (num / 10 > 0)
		print_number(num / 10);
	_putchar(num % 10 + '0');
}
