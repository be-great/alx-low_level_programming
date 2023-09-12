#include "main.h"

/**
 * _abs -  function that computes the absolute value of an integer
 * @num: the number to absolute
 * Return: the number in absolute
 */

int _abs(int num)
{
	if (num < 0)
		return (num * -1);
	return (num);
}
