#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * followed by a new line
 * @n: the starting number
 */

void print_to_98(int n)
{
	if (n < 98)
	{
	while (n <= 98)
	{
		_putchar(n + '0');
		if (n != 98)
		{
		_putchar(',');
		_putchar(' ');
		}
		n++;
	}
	}
	else
	{
	while (n >= 98)
	{
		_putchar(n + '0');
		if (n != 98)
		{
		_putchar(',');
		_putchar(' ');
		}
		n--;
	}
	}
	_putchar('\n');

}
