#include <stdio.h>
/**
 * main - Entry point
 * Description: while , comparisons
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit0 = 0;
	int digit1 = 0;

	while (digit0 <= 98)
	{
		digit1 = digit0 + 1;
		while (digit1 <= 99)
		{
			putchar('0' + (digit0 / 10));
			putchar('0' + (digit0 % 10));
			putchar(' ');
			putchar('0' + (digit1 / 10));
			putchar('0' + (digit1 % 10));
			if ((digit0 + digit1) != 197)
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
