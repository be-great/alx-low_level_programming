#include <stdio.h>
#include <math.h>

/**
 * fizz_buzz - the fizz-buzz test
 */

void fizz_buzz(void)
{
	int n = 1;

	while (n <= 100)
	{
		if ((n % 5 == 0) && (n % 3 == 0))
			printf("FizzBuzz");
		else if (n % 5 == 0)
			printf("Buzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else
			printf("%d", n);
		if (n < 100)
			printf(" ");

		n++;
	}
	printf("\n");
}

/**
 * main - Entry point
 * Discription: a program that prints the numbers from 1 to 100
 * followed by a new line. But for multiples of three print Fizz
 * instead of the number and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print
 * FizzBuzz.
 * Return: always 0 (Success)
 */

int main(void)
{
	fizz_buzz();
	return (0);
}

