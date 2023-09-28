#include "main.h"
int square(int n, int y);
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * 16 => 4*4
 * @n: the number
 * Return: if found sqrt(n) else -1
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 *square - function that found the square
 *@n: the number
 *@y: sqrt to check
 *Return: The sqrt result
 */

int square(int n, int y)
{
	if ((y * y) == n)
		return (y);
	else if (y * y > n)
		return (-1);
	return (square(n, y + 1));

}
