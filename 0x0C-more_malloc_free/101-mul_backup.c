#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _is_there_zero - determines if any number is zero
 * @argv: the arguments values.
 */
void _is_there_zero(char *argv[])
{
	int i, isn1 = 1, isn2 = 1;

	for (i = 0; argv[1][i]; i++)
		if (argv[1][i] != '0')
		{
			isn1 = 0;
			break;
		}

	for (i = 0; argv[2][i]; i++)
		if (argv[2][i] != '0')
		{
			isn2 = 0;
			break;
		}

	if (isn1 == 1 || isn2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _initialize_array - init array with zeros
 * @arr: The array.
 * @length: length.
 * Return: pointer to the init array.
 */
char *_initialize_array(char *arr, int length)
{
	int i = 0;

	for (i = 0; i < length; i++)
		arr[i] = '0';
	arr[length] = '\0';
	return (arr);
}

/**
 * _checknum - check the length of the number and
 * that is a digit not a not number value
 * @argv: arguments list value
 * @n: rows values.
 * Return: length of the number.
 */
int _checknum(char *argv[], int n)
{
	int len;

	for (len = 0; argv[n][len]; len++)
		if (!isdigit(argv[n][len]))
		{
			printf("Error\n");
			exit(98);
		}

	return (len);
}

/**
 * main - The Entry point.
 * discription: a program that multiplies two positive numbers.
 * @argc: number of arguments.
 * @argv: arguments list.
 * Return: 0 always (Success)
 */
int main(int argc, char *argv[])
{
	int len1, len2, lnout, add, addl, i, j, k, ca;
	char *nout;

	if (argc != 3)
		printf("Error\n"), exit(98);
	len1 = _checknum(argv, 1), len2 = _checknum(argv, 2);
	_is_there_zero(argv), lnout = len1 + len2, nout = malloc(lnout + 1);
	if (nout == NULL)
		printf("Error\n"), exit(98);
	nout = _initialize_array(nout, lnout), k = lnout - 1;
	i = len1 - 1, j = len2 - 1, ca = addl = 0;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)/*The number two is larger than the other one*/
		{
			if (addl > 0)
			{
				add = (nout[k] - '0') + addl;
				if (add > 9)
					nout[k - 1] = (add / 10) + '0';
				nout[k] = (add % 10) + '0';
			}
			i = len1 - 1, j--, addl = 0, ca++, k = lnout - (1 + ca);
		}
		if (j < 0)/*The number one is larger than the number two*/
		{
			if (nout[0] != '0')
				break;
			lnout--;
			free(nout), nout = malloc(lnout + 1), nout = _initialize_array(nout, lnout);
			k = lnout - 1, i = len1 - 1, j = len2 - 1, ca = addl = 0;
		}
		if (j >= 0)
		{
			add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (nout[k] - '0') + addl;
			addl = add / 10, nout[k] = (add % 10) + '0';
		}
	}
	printf("%s\n", nout);
	return (0);
}
