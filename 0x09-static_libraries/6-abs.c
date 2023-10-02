#include "main.h"
/**
 * _abs - compute the absolute value of an number
 * @n: the number to check
 * Return: the abs of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
