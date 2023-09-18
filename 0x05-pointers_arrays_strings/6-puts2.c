#include "main.h"

/**
 * puts2 - function that print the even part
 * @str: string to check
 */

void puts2(char *str)
{
	int i = 0;
	int len;

	len = strlen(str);
	while (i < len)
	{
		if (i % 2 == 0)
			_putchar(str[i]);

		i++;
	}
	_putchar('\n');

}
