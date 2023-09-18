#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: string to print half
 */

void puts_half(char *str)
{
	int start;
	int len;

	len = strlen(str);
	if (len % 2 != 0)
		start = (len - 1) / 2;
	else
		start = (len / 2);
	while (start < len - 1)
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');

}
