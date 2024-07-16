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
    size_t block_size = sqrt(size), i;
    size_t start = 0;
    size_t end = block_size;

    if (array == NULL || size == 0)
        return (-1);

    while (start < size && array[end - 1] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", end - 1, array[end - 1]);
        start = end;
        end += block_size;
        if (end > size)
            end = size;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", start, end);

    for (i = start; i < end; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }
    return (-1);
}