#include "main.h"

/**
 * print_last_digit -  function that prints the last digit of a number.
 * @num: number to get the last digit from
 * Return: value of the last digit
 */

int print_last_digit(int num)
{
	int lastdigit;

	if (num < 0)
	{
		lastdigit = ((num * -1) % 10);
		_putchar(lastdigit + '0');
		return (lastdigit);
	}
	lastdigit = num % 10;
	_putchar(lastdigit + '0');
	return (lastdigit);
}
