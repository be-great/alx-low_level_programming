#include "search_algos.h"

/**
 * divide - divide the array
 * @array: the array
 * @low: the start index of the new array
 * @high: the end index of the new array
 * @value: the value to find
 * Return: the index
 */
int divide(int *array, int low, int high, int value)
{
	int mid;
	int i;

	if (!array || low > high)
		return (-1);
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i < high)
			printf("%i, ", array[i]);
		else
			printf("%i\n", array[i]);
	}
	mid = low + (high - low) / 2;

	if (array[mid] == value)
		return (mid);
	if (value < array[mid])
	{
		/* go left */
		return (divide(array, low, mid - 1, value));
	}
	else
	{
		/* go right */
		return (divide(array, mid + 1, high, value));
	}
}

/**
 * binary_search - binary search algorithm
 * @array: the array
 * @size: the size of the array
 * @value: the value to find
 * Return: the index
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = divide(array, 0, size - 1, value);
	return (index);
}
