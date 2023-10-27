#include "main.h"

/**
 * main - program that multiplies two numbers.
 * @argc: number of argument
 * @argv: the argument value
 * Return: 0 always (Success)
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
