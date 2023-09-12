#include <stdio.h>

/**
 * print_alphabet - print alphabet number in lowercase
 */
void print_alphabet(void)
{
	int alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;

	}
	putchar('\n');
}

/**
 * main - Entry point
 * Discription: simple display script putchar
 * Return: 0 success
 */

int main(void)
{
	print_alphabet();
	return (0);
}
