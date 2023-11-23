#include "main.h"

/**
* flip_bits - function that returns the number of
* bits you would need to flip to get from
* one number to another.
* @n: the number 1
* @m:  the number 2
* You are not allowed to use the % or / operators
* Return:  the differennt
*/


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits = 0;

	while (n != 0 || m != 0)
	{
		nbits += (n & 1) != (m & 1);
		n >>= 1;
		m >>= 1;
	}

	return (nbits);
}
