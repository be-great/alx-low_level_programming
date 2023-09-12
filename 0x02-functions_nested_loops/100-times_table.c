#include "main.h"
#include <stdio.h>
/**
 * print_times_table -  function that prints the n times table
 * starting with 0.
 * @n: the n times
 */
void print_times_table(int n)
{
	int i = 0;
	int j = 0;

	if (n > 15 || n < 0)
		return;
	while (i <= n)
	{
		while (j <= n)
		{
			printf("%d", i * j);
			if (j != n)
			{
				printf(", ");
				if ((((i * (j + 1)) / 10) % 10) == 0 && (i * (j + 1)) / 100 == 0)
				{
					printf("  ");
				}
				else if ((((i * (j + 1)) / 10) % 10) != 0 && (i * (j + 1)) / 100 == 0)
					printf(" ");
			}
			j++;
		}
		printf("\n");
		j = 0;
		i++;
	}
}
