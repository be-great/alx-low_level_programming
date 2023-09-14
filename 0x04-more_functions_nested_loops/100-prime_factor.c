#include <stdio.h>
#include <math.h>

/**
 * largestPrimeFactor - prints the largest prime factor
 * of the number 612852475143
 * @num: number to check
 * Discription: find the largest primt factor of 612852475143
 */

void largestPrimeFactor(unsigned long num)
{
	unsigned long i = 3;
	unsigned long largestnum;
	/* first prime number is even so */
	while (num % 2 == 0)
		num = num / 2;

	/* the other prime number is going to be odd so */

	while (i <= sqrt(num))
	{
		if (num % i > 0)
			i += 2;
		else
		{
			num = num / i;
			largestnum = i;
		}
	}

	if (num > 2)
		largestnum = num;
	printf("%lu\n", largestnum);
}

/**
 * main - Entry point
 * Discription: find the largest primt factor of 612852475143
 * Return: always 0 (Success)
 */

int main(void)
{
	largestPrimeFactor(612852475143);
	return (0);
}

