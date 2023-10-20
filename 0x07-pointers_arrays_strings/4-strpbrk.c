#include <stdio.h>
/**
 * *_strpbrk - function that searches a string for
 *  any of a set of bytes.
 *  Description: function locates the first occurrence in the string s
 *  of any of the bytes in the string accept
 *  @s: the string
 *  @accept: the charcter are accepted (the set of bytes)
 *  Return: pointer to start that match of the byte or NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	char *ptr = NULL;
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				ptr = &s[i];
				return (ptr);
			}
			j++;
		}

		j = 0;
		i++;
	}


	return (ptr);
}

