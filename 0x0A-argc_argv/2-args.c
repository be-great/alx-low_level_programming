#include "main.h"

/**
 * main - program that prints all arguments it receives.
 * @argc: number of argument
 * @argv: the argument value
 * Return: 0 always (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
