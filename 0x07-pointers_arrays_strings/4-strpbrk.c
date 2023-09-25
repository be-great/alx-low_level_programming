#include <stdio.h>
/**
 * *_strpbrk - function that searches a string for
 *  any of a set of bytes.
 *  Description: seatch
 *  @s: the string
 *  @accept: the charcter are accepted (the set of bytes)
 *  Return: pointer to start that matche of the byte
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

