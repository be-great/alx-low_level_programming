#include "main.h"

/**
* create_array - Create an array of chars and initialize it
*  with a specific char.
* @size: The size of the array.
* @c: The character to fill the array with.
*
* Return: A pointer to the created array, or
* NULL if size is <= 0 or if malloc fails.
*/
char *create_array(unsigned int size, char c)
{
	char *arr;

	unsigned int i;

	if (size <= 0)
		return (NULL);

	arr = (char *)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
