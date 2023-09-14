#include "main.h"

/**
 * more_numbers - function that prints a numbers from 0-14
 * followed by a new line.
 */

void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (j < 10)
	{
		while (i < 15)
		{
			if (i / 10 == 0)
				_putchar(i + '0');
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			i++;
		}
		_putchar('\n');
		i = 0;
		j++;
	}

}
