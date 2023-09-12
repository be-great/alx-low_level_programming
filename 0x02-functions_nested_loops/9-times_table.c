#include "main.h"

/**
 * times_table -  function that prints the 9 times table
 * starting with 0.
 */

void times_table(void)
{
	int i = 0;
	int j = 0;
	int firstdigit;
	int secondigit;

	while (i <= 9)
	{
		while (j <= 9)
		{
			firstdigit = (i * j) / 10;
			secondigit = (i * j) % 10;
			if (firstdigit == 0)
				_putchar(secondigit + '0');
			else
			{
				_putchar(firstdigit + '0');
				_putchar(secondigit + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				if (((i * (j + 1)) / 10) == 0)
				{
					_putchar(' ');
				}
			}
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
