#include "main.h"
/**
 * _pow_recursion - function that returns the factorial of a given nubmer.
 * 4**3 => 4*4*4
 * @x: value
 * @y: power
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	int num;

	if (y < -1)
		return (-1);
	else if (y == 0)
		return (1);
	num = _pow_recursion(x, y - 1);
	return (x * num);
}
