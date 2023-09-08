#include <stdio.h>
/**
 * main - Entry point
 * Description: while , comparisons
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alpha = 122;

	while (alpha >= 97)
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);

}
