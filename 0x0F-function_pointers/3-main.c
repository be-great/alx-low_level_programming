#include "3-calc.h"

/**
 * main - Entry point
 * Description:
 * 1- check in the argument arg[2] the operation
 * 2- then call get_op_functions to select the function
 * for that operater
 * 3- then convert the number for arg[1],arg[3]
 * to int
 * 4- print the resulted outpt
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", operation(a, b));
	return (0);
}
