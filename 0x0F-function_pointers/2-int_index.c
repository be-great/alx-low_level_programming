#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: The array of int.
 * @size: size of the array.
 * @cmp: is a pointer to the function to be used to compare values
 * Return: The index of the first element for which the cmp
 * function does not return 0. If no elements matches,
 * return -1. If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		/*First check size*/
		if (size <= 0)
			return (-1);
		/* loop throw the array and compare*/
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
