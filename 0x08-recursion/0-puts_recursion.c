#include "main.h"
/**
 * _puts_recursion - function print string follow by \n
 *  @s: the string
 */


void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	s++;
	_puts_recursion(s);

}
