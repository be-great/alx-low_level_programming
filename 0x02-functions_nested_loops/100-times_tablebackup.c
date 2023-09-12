#include "main.h"
/**
 * print_times_table -  function that prints the n times table
 * starting with 0.
 * @n: the n times
 */
void print_times_table(int n)
{
	int i = 0;
	int j = 0;
	int firstdigit;
	int secondigit;
	int thirdigit;

	if (n > 15 || n < 0)
		return;
	while (i <= n)
	{
		while (j <= n)
		{
			firstdigit = (i * j) / 100;
			secondigit = ((i * j) / 10) % 10;
			thirdigit  = (i * j) % 10;
			if (firstdigit == 0 && secondigit == 0)
				_putchar(thirdigit + '0');
			else if (firstdigit == 0 && secondigit != 0)
			{
				_putchar(secondigit + '0');
				_putchar(thirdigit + '0');
			}
			else
			{
				_putchar(firstdigit + '0');
			       	_putchar(secondigit + '0');
				_putchar(thirdigit + '0');
			}
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
				if ((((i * (j + 1)) / 10) % 10) == 0 && (i * (j + 1)) / 100 == 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if ((((i * (j + 1)) / 10) % 10) != 0 && (i * (j + 1)) / 100 == 0)
					_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
