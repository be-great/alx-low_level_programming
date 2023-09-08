#include <stdio.h>
/**
 * main - Entry point
 * Description: while , comparisons
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit0 = 48;
	int digit1;

	while (digit0 <= 57)
	{
		digit1 = digit0 + 1;
		while (digit1 <= 57)
		{
			putchar(digit0);
			putchar(digit1);
			if (digit0 + digit1 != 113)
			{
				putchar(',');
				putchar(' ');
			}
			digit1++;
		}
		digit0++;
	}
	putchar('\n');
	return (0);

}
