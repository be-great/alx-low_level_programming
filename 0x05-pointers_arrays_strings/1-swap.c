#include "main.h"

/**
 * swap_int - swap two integers by there pointer
 * @a: number one
 * @b: number two
 */

void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;
}
