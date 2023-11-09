#include "variadic_functions.h"

/**
* print_numbers - function that prints numbers, followed by a new line.
*
* @separator: string to printed between numbers
* @n: number of numbers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	int num, j;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		/*check number length*/
		printf("%d", num);
		if (separator == NULL)
			continue;
		if (i < (n - 1))
		{
			j = 0;
			while (separator[j])
			{
				printf("%c", separator[j]);
				j++;
			}
		}
	}
	printf("\n");
}
