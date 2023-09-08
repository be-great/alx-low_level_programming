#include <stdio.h>
/**
 * main - Entry point
 * Description: while , comparisons
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alph = 97;

	while (alph <= 122)
	{
		putchar(alph);
		alph++;
	}
	alph = 65;
	while (alph <= 90)
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);

}
