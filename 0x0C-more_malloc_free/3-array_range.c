#include "main.h"
/**
 * *array_range - function that creates an array of integers
 * @min: starting number
 * @max: ending number
 * Return: numbers from min-max if (min > max or malloc fails) NULL
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int j = 0;

	if (min > max)
		return (NULL);
	ptr = malloc(((max - min) + 1) * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	i = min;
	while (i <= max)
	{
		ptr[j] = i;
		i++;
		j++;
	}
	return (ptr);
}

