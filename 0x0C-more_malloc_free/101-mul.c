#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _isdigit - check if a string contine not digit char or not
 * @c: the string
 * Return: 1 if all is digit else 0
 */
int _isdigit(char *c)
{
	int i;

	for (i = 0; c[i] != '\0' ; i++)
	{
		if (!(c[i] >= 48 && c[i] <= 57))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * *initzero - init array with zeros numbers
 * @arr: the array
 * Return: the array after init with zeros
 */
char *initzero(char *arr)
{
	int i;

	for (i = 0; arr[i] != '\0' ; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}

/**
 * multiply - the function that multiply the number
 * @num1: the first number
 * @num2: the second number
 * @result: num1 * num2
 */
void multiply(char *num1, char *num2, char *result)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int i, j, sum, digit1, digit2, mul;
	int resultLen, startIdx;

	/* Initialize the result array with zeros*/
	int *product = (int *)malloc((len1 + len2) * sizeof(int));

	memset(product, 0, (len1 + len2) * sizeof(int));

	/*Check for memory allocation failure*/
	if (product == NULL)
	{
		printf("Memory allocation failed\n");
		exit(1);
	}

	/* Multiply each digit and update the result array */
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			digit1 = num1[i] - '0';
			digit2 = num2[j] - '0';
			mul = digit1 * digit2;
			sum = mul + product[i + j + 1];
			product[i + j + 1] = sum % 10;
			product[i + j] += sum / 10;
		}
	}

	/* Convert the product to a string*/
	resultLen = len1 + len2;
	startIdx = 0;
	while (startIdx < resultLen && product[startIdx] == 0)
	{
		startIdx++;
	}

	if (startIdx == resultLen)
	{
		strcpy(result, "0");
	}
	else
	{
		for (i = startIdx; i < resultLen; i++)
		{
			result[i - startIdx] = product[i] + '0';
		}
			result[resultLen - startIdx] = '\0';
	}
}
/**
 * main - multiply two number that are large in number
 * @argc: the number of argument
 * @argv: the argument it self
 * Return: 0 always (Success)
 */
int main(int argc, char *argv[])
{
	char *arr;
	int len1, len2;
	/*argument checks*/
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	len1 = strlen(argv[1]);
	len2 = strlen(argv[2]);
	arr = (char *)malloc(len1 + len2 + 1);
	if (arr == NULL)
	{
		printf("Error\n");
		return (0);
	}
	arr = initzero(arr);
	/* multiply method start by the end*/
	multiply(argv[1], argv[2], arr);
	printf("%s\n", arr);
	return (0);
}
