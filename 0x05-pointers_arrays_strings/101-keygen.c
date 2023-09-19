#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Discription: program that generates random
 * valid passwords for the program 101-crackme
 * Return: 0 Always (Success)
 */


int main(void)
{
	int sum;
	char rand0;

	srand(time(NULL));
	while (sum < 2645)
	{
		rand0 = rand() % 128;
		sum = sum + rand0;
		putchar(rand0);
	}
	putchar(2772 - sum);
	return (0);

}
