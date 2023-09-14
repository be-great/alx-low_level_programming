#include <stdio.h>

/**
 * main - Entry point
 * Discription: find the largest primt factor of 612852475143
 * Return: always 0 (Success)
 */
int main(void)
{
	unsigned long num = 612852475143;
	unsigned long i = 2;

	while (i * i <= num)
	{
		if (num % i > 0)
			i++;
		else
			num = num / i;
	}

	printf("%lu\n", i);
	return (0);
}

