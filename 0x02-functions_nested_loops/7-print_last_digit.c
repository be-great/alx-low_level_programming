#include "main.h"

/**
 * print_last_digit -  function that prints the last digit of a number.
 * @num: number to get the last digit from
 * Return: value of the last digit
 */

int print_last_digit(int num)
{
	int lastdigit;

	lastdigit = num % 10;

	if (num < 0)
	{
		_putchar(lastdigit * -1 + '0');
		return (lastdigit * -1);
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
