#include "main.h"
/**
 * main - program that prints the minimum number
 * of coins to make change for an amount of money.
 * @argc: number of argument
 * @argv: the argument value
 * Return: 0 success , 1 wrong argument
 */
int main(int argc, char *argv[])
{
	int cents, coinsneeds = 0;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	/*because we have one argument cents*/
	cents = atoi(argv[1]);
	/*we have : penny = 1 cents , nickel = 5 c*/
	/* dime = 10 cents , quarter = 25 cents*/
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		coinsneeds += 1;
	}
	printf("%d\n", coinsneeds);
	return (0);
}
