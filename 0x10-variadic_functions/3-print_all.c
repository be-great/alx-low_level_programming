#include "variadic_functions.h"

/**
* print_all - function that prints anything.
*
* @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j, check = 0;
	char specefier[4] = "cifs", *ch;

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (specefier[j])
		{
			if (format[i] == specefier[j] && check == 1)
			{
				printf(", ");
				break;
			}
				j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int)), check = 1;
				break;
			case 'i':
				printf("%i", va_arg(args, int)), check = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), check = 1;
				break;
			case 's':
				ch = va_arg(args, char*);
				if (ch == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", ch), check = 1;
				break;
		} i++;
	}
	printf("\n"), va_end(args);
}
