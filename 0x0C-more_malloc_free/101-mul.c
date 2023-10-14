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
char *initzero(char *arr, int len)
{
	int i;

	for (i = 0; i < len ; i++)
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
	int i, j, k, ca, addl,add, lnout;
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
	arr = initzero(arr, (len1 + len2));
	/* multiply method start by the end*/
	lnout = len1 + len2;
	k = lnout - 1, i = len1 - 1, j = len2 - 1, ca = addl = 0;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (addl > 0)
			{
				add = (arr[k] - '0') + addl;
				if (add > 9)
					arr[k - 1] = (add / 10) + '0';
				arr[k] = (add % 10) + '0';
			}
			i = len1 - 1, j--, addl = 0, ca++, k = lnout - (1 + ca);
		}
		if (j < 0)
		{
			if (arr[0] != '0')
				break;
			lnout--;
			free(arr), arr = malloc(lnout + 1), arr = initzero(arr, lnout);
			k = lnout - 1, i = len1 - 1, j = len2 - 1, ca = addl = 0;
		}
		if (j >= 0)
		{
			add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (arr[k] - '0') + addl;
			addl = add / 10, arr[k] = (add % 10) + '0';
		}
	}

	printf("%s\n", arr);
	return (0);
}
