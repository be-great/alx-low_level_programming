#include "main.h"

/**
* set_bit - Set the bit object
* @n: the number
* @index: the index to check
* Return: 1 if it worked, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= (1UL << index);
	return (1);
}
