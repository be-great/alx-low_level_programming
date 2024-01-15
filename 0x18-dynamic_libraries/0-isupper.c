#include "main.h"

/**
 * _isupper - function that check for upper characters.
 * @c: the value to check
 * Return: 1 if ture , 0 if false
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	return (0);
}
