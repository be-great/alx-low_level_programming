#include "main.h"
/**
 * _strlen - return the length of giving string
 * @s: string to check
 * Return: the length of the giving string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}
