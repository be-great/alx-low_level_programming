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
		if (alph == 101 || alph == 113)
			alph++;
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);

}
