#include "main.h"

/**
 * countword - to count the number of word in a string
 * @str: the string
 * Return: number of word
 */

int countword(char *str)
{
	int i, flag = 0, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			flag = 0;
	else if (flag == 0)
	{
		flag = 1;
		count++;

	}
	}
	return (count);

}


/**
 * **strtow - splits a string into words.
 * @str: the string
 * Return: pointer of array of strings
 */

char **strtow(char *str)
{
	char **arr, *temp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (str[len])
		len++;
	words = countword(str);
	if (words == 0)
		return (NULL);

	arr = (char **) malloc(sizeof(char *) * (words + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				temp = (char *) malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				arr[k] = temp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	arr[k] = NULL;

	return (arr);
}
