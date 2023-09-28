#include "main.h"
/**
 * factorial - function that returns the factorial of a given nubmer.
 * 4! => 4*3*2*1
 * @n: the number
 * Return: the factorial
 */
int factorial(int n)
{
	int num = n;

	if (n < -1)
		return (-1);
	else if (n == 0)
		return (1);

	num = factorial(n - 1);
	return (n * num);
}
