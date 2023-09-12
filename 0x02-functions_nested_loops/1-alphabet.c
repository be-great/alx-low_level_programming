#include "main.h"
#include "_putchar.h"
/**
 * print_alphabet - print alphabet number in lowercase
 */
void print_alphabet(void)
{
	int alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;

	}
	_putchar('\n');
}
