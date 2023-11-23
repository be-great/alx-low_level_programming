#include "main.h"
/**
* _strlen - return the length of giving string
* @s: string to check
* Return: the length of the giving string
*/

int _strlen(const char *s)
{
	int count = 0;

	while (s[count])
	{
		count++;
	}
	return (count);
}
/**
* binary_to_uint - function that converts a binary number to an unsigned int.
* @b: the binary value stored in string
* Return: the number in unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	int i, j, len, num = 0, bit, power;

	if (!b)
		return (0);
	len = _strlen(b);
	for (i = len - 1, j = 0; i >= 0; j++, i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		bit = b[i] - '0';
		power = 1 << j;
		num += bit * power;
	}
	return (num);
}
