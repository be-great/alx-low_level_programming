#include "main.h"

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: number of argument
 * @argv: the argument value
 * Return: 0 always (Success)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
