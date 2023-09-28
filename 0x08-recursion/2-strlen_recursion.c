#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: the string
 * Return: string len number
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		int count = _strlen_recursion(s + 1);

		return ((1) + count);
	}
	return (0);
}
