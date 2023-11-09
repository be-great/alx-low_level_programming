#include "variadic_functions.h"

/**
* print_strings - function that prints strings, followed by a new line.
* @separator: string to printed between numbers
* @n: The number of string passed
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	int j;

	char *string;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char*);
		/*print the string*/
		if (string == NULL)
			printf("(nil)");
		else
		{
			while (*string)
			{
				printf("%c", *string++);
			}
		}
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
