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
	int i = 3;
	printf("%lu, ", n0);
	printf("%lu, ", n1);
	while (i < 50)
	{
		unsigned long n3 =n1+n0;
		n0=n1;
		n1=n3;
		printf("%lu", n3);
		if (i < 49)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
