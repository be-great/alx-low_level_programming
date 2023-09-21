#include <stdio.h>
/**
 **string_toupper - function that changes all lowercase letters
 *of a string to uppercase.
 *@str: the string to convert
 *Return: pointer of str
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*str)
	{
		if (*str > 96 && *str < 123)
		{
			*str -= 32;
		}
		str++;
	}
	return (ptr);

}

