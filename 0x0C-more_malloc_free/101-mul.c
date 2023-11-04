#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isnumber - Check if string only contains digits.
 * @numbers: The string to check.
 * Return: 1 if the string contains all digits, else 0.
 */
int _isnumber(char numbers[])
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
 * _strlen - Return the length of the given string.
 * @s: String to check.
 * Return: The length of the given string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}

/**
 * _calloc - Function that allocates memory for an array using malloc.
 * Description: Creating a calloc function to allocate memory spaces
 * with initialized values of 0, not random values like malloc.
 * @nmemb: Number of array elements.
 * @size: Size of the array elements value.
 * Return: Pointer to the new allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int len;
	int i = 0;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	len = nmemb * size;

	while (i < len)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

/**
 * rev_array - Function that reverses the content of an array of integers.
 * @a: The array.
 * @n: Number of elements of the array.
 */
void rev_array(char *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}

/**
 * convertArrayToString - Convert the array to string.
 * @arr_0: The array.
 * @lout: Length of the array.
 * @arr_1: The resulting array.
 */
void convertArrayToString(int *arr_0, int lout, char *arr_1)
{
	int index = 0;
	int j;

	for (j = lout; j >= 0; j--)
	{
		if (arr_0[j] != 0 || index > 0)
			arr_1[index++] = arr_0[j] + '0';
	}

	if (index == 0)
		arr_1[index++] = '0';

	arr_1[index] = '\0';
}

/**
 * main - Entry point
 * Description: Program that multiplies two positive numbers
 * using infinite multiplication.
 * @argc: Number of arguments.
 * @argv: Arguments list.
 * Return: 0 always (Success).
 */
int main(int argc, char *argv[])
{
	int check0, check1, len1, len2, lout, i, j, *arr_0, product;
	char *arr_1;
	char *num0 = argv[1];
	char *num1 = argv[2];

	if (argc != 3)
		printf("Error\n"), exit(98);
	check0 = _isnumber(argv[1]), check1 = _isnumber(argv[2]);
	if (!check0 || !check1)
		printf("Error\n"), exit(98);
	/* Max result number length = len1 + len2 + 1 */
	len1 = _strlen(argv[1]), len2 = _strlen(argv[2]);
	lout = len1 + len2;
	arr_0 = _calloc(sizeof(int), lout + 1);
	arr_1 = _calloc(sizeof(char), lout + 1);
	if (arr_0 == NULL || arr_1 == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	/******Multiplication algorithm******/
	/* ##1- reverse the strings */
	rev_array(num0, len1), rev_array(num1, len2);
	/* ##2- multiple digit by digit and adding previous values */
	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			product = (num0[i] - '0') * (num1[j] - '0') + arr_0[i + j];
			arr_0[i + j] = product % 10;
			if (i + j + 1 < lout)
			{
				arr_0[i + j + 1] += product / 10;
			}
		}
	}
	/* Convert to string */
	convertArrayToString(arr_0, lout, arr_1);
	printf("%s\n", arr_1), free(arr_0), free(arr_1);
	return (0);
}
