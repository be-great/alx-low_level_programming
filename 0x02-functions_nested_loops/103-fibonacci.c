#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 always (success)
 */
int main(void)
{
	unsigned long n0 = 1;
	unsigned long n1 = 2;
	unsigned long sum = 2;
	int i = 3;

	while (i <= 32)
	{
		unsigned long n3 = n1 + n0;

		if (n3 % 2 == 0)
			sum += n3;
		n0 = n1;
		n1 = n3;
		i++;
	}
	printf("%lu\n", sum);
	return (0);
}
