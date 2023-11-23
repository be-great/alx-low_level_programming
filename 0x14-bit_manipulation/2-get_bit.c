#include "main.h"

/**
* get_bit - Get the bit object
* @n: the number
* @index: the index to find
* Return: the value of the bit at index index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{

	if (index >= 64)
		return (-1);

	return ((n >> index) & 1);
}
