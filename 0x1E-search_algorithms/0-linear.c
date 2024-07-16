#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 * @array: the array
 * @size: the size of the array
 * @value: the value to find
 * Return: the index
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
