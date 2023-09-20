#include <stdio.h>
/**
 * *string_toupper - function that changes all lowercase letters
 * of a string to uppercase.
 * @str: the string to convert
 * Return: pointer of str
 */

char *string_toupper(char *str)
{
	int i = 0; 
	while (str[i] != '\0') // != not equal to null
	{
		// small in ascii from : 97 - 122
		// capital in ascii from : 65 - 90
		if (str[i] >= 97 && str[i] <= 122)
			 str[i] = str[i] - 32; // different between small and capital
		i++;
	}

	return (str);
}

