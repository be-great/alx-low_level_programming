#include "main.h"
int checker(int n, int y);
/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: the number
 * Return: 1 if prime else 0
 */
int is_prime_number(int n)
{
	return (checker(n, 2));
}
/**
 *checker - function that check if number prime or not
 *@n: the number
 *@y: the natural number to check with
 *Return: 1 if prime else 0
 */

int checker(int n, int y)
{
	if (n <= 1)
		return (0);
	else if (y >= n)
		return (1);
	else if ((n % y) == 0)
		return (0);
	return (checker(n, y + 1));

}
