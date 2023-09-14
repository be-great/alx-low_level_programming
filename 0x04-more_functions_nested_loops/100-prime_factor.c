#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - prints the largest prime factor
 * of the number 612852475143
 * @num: number to check
 * Discription: find the largest primt factor of 612852475143
 */

void largest_prime_factor(unsigned long num)
{
	unsigned long i = 2;

	while (i * i <= num)
	{
		if (num % i > 0)
			i++;
		else
			num = num / i;
	}

	printf("%lu\n", i);
}

/**
 * main - Entry point
 * Discription: find the largest primt factor of 612852475143
 * Return: always 0 (Success)
 */

int main(void)
{
	largest_prime_factor(612852475143);
	return (0);
}

