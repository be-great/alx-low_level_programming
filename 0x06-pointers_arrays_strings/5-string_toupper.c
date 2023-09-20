#include <stdio.h>
/**
 * *string_toupper - function that changes all lowercase letters
 * of a string to uppercase.
 * @str: the string to convert
 * Return: pointer of str
 */

char *string_toupper(char *str)
{
	/* char *ptr = str;*/

	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
			*str = (int)*str - 32;
		str++;
	}

	return (ptr);
}

