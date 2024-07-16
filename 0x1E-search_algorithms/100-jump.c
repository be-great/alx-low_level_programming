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
	size_t step = sqrt(size);
	size_t prev = 0, start, end;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);

		prev += step;
	}

	start = prev - step;
	end = (prev >= size) ? size : prev;
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);

	for (i = start; i < end; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
