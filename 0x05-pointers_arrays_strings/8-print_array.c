#include "main.h"

/**
 * print_array -  prints n elements of an array of integers.
 * @a: the string
 * @n:the n elements
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i  < n)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");

}
