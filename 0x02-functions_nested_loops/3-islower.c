#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: character to test
 * Return: 1 if char in lowercase , 0 if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
