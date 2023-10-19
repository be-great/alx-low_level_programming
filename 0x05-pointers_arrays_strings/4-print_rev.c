#include "main.h"

/**
 * print_rev - function that prints a string
 * in reverse followed by \n
 * @s: character to test
 */

void print_rev(char *s)
{
	/**Declarations*/
	int len;
	int end;

	if (!s)
	{
	return;
	}

	/**initlization*/
	len = strlen(s);
	end = len - 1;
	while (end >= 0)
	{
		/* swap the each end of string with each of the begging*/
		_putchar(s[end]);
		end--;
	}
	_putchar('\n');
}
