#include "search_algos.h"
#include <math.h>
/**
 * jump_search - jump_search algorithm
 * @array: the array
 * @size: the array size
 * @value: the value to find
 * Return: the index
 */
int jump_search(int *array, size_t size, int value)
{
    int mid, i = 0;
    mid = sqrt(size);

    while (i < size && array[i] < value)
    {



        i =  i +  mid;
    }
}