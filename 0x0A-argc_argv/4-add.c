#include "main.h"

/**
 * isnumber - check if string of character is number
 * @numbers : the string to check
 * Return: 1 if true else 0
 */
int isnumber(char numbers[])
{
	int i = 0;

	if (numbers[0] == '-')
		i = 1;
	while (numbers[i] != '\0')
	{
		if (!isdigit(numbers[i]))
			return (0);
		i++;
	}
	return (1);
}


/**
 * main - program that adds positive numbers.
 * @argc: number of argument
 * @argv: the argument value
 * Return: 0 always (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (!isnumber(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
