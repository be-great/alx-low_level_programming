#include "main.h"

/**
 * _isdigit - function that check for digit numbers.
 * @c: the value to check
 * Return: 1 if ture , 0 if false
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
