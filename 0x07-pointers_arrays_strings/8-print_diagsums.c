#include <stdio.h>
/**
 * print_diagsums - print sum of the two diagonals os square matrix
 * @a: the array
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum0 = 0;
	int sum1 = 0;

	/* first diagonal*/
	while (i < size)
	{
		sum0 += a[i * size + i];
		i++;
	}

	i = 0;
	/*second diagonal*/
	while (i < size)
	{
		sum1 += a[i * size + (size - 1 - i)];
		i++;
	}
	printf("%d, %d\n", sum0, sum1);
}


