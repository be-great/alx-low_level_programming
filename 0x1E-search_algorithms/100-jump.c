#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - jump search algorithm
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to find
 * Return: the index of the value, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t mid = sqrt(size), step = 0;
	size_t start = 0, end = 0, i;

	if (array == NULL || size == 0)
		return (-1);

	while (array[step] < value && step <= size)
	{
		step += mid;
		start = end;
		end = step;
	}

	for (i = 0; i < end && i <= size; i += mid)
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

	printf("Value found between indexes [%lu] and [%lu]\n", start, end);

	for (i = start; i <= end && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	if (end > size)
		return (-1);

	return (-1);
}
