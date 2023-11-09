#include "variadic_functions.h"

/**
* print_all - function that prints anything.
*
* @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;

	char arglist[4] = "cifs";

	char specefier[4];

	int *ch;

	va_start(args, format);
	while (format[i])
	{
		j = 0;
		/*check if format is right*/
		while (arglist[j])
		{
			if (arglist[j] == format[i])
			{
				ch = va_arg(args, int *);
				if (ch == NULL)
				{
					printf("(nil)");
					break;
				}
				specefier[0] = '%';
				specefier[1] = format[i];
				specefier[2] = ',';
				specefier[3] = ' ';
				printf(specefier, ch);
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");

}
