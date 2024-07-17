#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * min - find the min number
 * @a: the first character
 * @b: the second character
 * Return: the min number
 */
int min(int a, int b)
{
	if (a > b)
		return (b);
	return (a);
}

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
 * exponential_search - exponential search algorithm
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to find
 * Return: the index of the value, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, end;

	if (array[0] == value)
		return (0);
	i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		i = i * 2;
	}
	end = i;
	if (i == size)
		end = size - 1;
	printf("Value found between indexes [%li] and [%li]\n", i / 2, end);
	return (divide(array, i / 2, min(i, size - 1), value));
}
