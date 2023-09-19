#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: the string array
 * Return: the number we got
 */

int _atoi(char *s)
{

	int sig = 1;
	unsigned int number = 0;
	/*int i = 0;*/
	do {
		if (*s == '-')
			sig = sig * -1;
		else if (*s >= '0' && *s <= '9')
		{
			number = (number * 10) + (*s - '0');
		}
		else if (number > 0)
			break;
	} while (*s++);
	return (number * sig);
}
