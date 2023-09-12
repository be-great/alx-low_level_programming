#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int sum = 0;
	int i = 0;
	int j = 0;

	while ((i * 5) < 1024)
	{
		sum += i * 5;
		i++;
	}
	while ((j * 3) < 1024)
	{
		sum += j * 3;
		j++;
	}
	printf("%d\n", sum);
	return (0);
}
