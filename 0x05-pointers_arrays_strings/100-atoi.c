#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: the string array
 * Return: the number we got
 */

int _atoi(char *s)
{

	int sign = 1;
	unsigned int num = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		sign = -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + s[i] - '0';
		}
		else if (num > 0)
			break;
		i++;
	}
	return (num * sign);
}
