#include <stdio.h>

/**
 * main - Entry point
 * Description: putchar , while
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int alph = 97;

	while (alph <= 122)
	{
		putchar(alph);
		alph++;

	}
	putchar('\n');
	return (0);

}
