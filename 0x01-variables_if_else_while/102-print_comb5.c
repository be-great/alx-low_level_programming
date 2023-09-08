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
	char ch0, ch1, ch2, ch3;

	while (digit0 <= 98)
	{
		digit1 = digit0 + 1;
		while (digit1 <= 99)
		{
			ch0 = '0' + (digit0 / 10);
			ch1 = '0' + (digit0 % 10);
			ch2 = '0' + (digit1 / 10);
			ch3 = '0' + (digit1 % 10);
			putchar(ch0);
			putchar(ch1);
			putchar(' ');
			putchar(ch2);
			putchar(ch3);
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
