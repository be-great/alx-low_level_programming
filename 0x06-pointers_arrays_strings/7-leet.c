#include <stdio.h>
/**
 * *leet - encode string into 1337
 * @str: string to encode
 * Return: pointer of str
 */

char *leet(char *str)
{
	char *ptr = str;
	char keys[] = {'a', 'e', 'o', 't', 'l'};
	char values[] = {'4', '3', '0', '7', '1'};
	int lenkey = 5;
	int i = 0;

	while (*str)
	{
		while (i < lenkey)
		{
			if (*str == keys[i] || *str == keys[i] - 32)
			{

				*str = values[i];
			}
			i++;
		}
	str++;
	i = 0;
	}
	return (ptr);
}

