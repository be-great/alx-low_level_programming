#include <stdio.h>
/**
 * _strspn - function that gets the length of a prefix substring
 * Discription: if there is char in str not in accept break
 * and return the current position where you are in str
 * @s: segment (the string)
 * @accept: character that accepted in str
 * Return: number of bytes excepted in str by accept
 */

unsigned int _strspn(char *s, char *accept)
{
	/* init looping index*/
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int pos;
	/*loop throw the str*/
	while (s[i] != '\0')
	{

		/*loop throw accept intel if we reach the end it mean */
		/* we didn't found any*/
		while (s[i] != accept[j])
		{
			if (accept[j] == '\0')
			{
				pos = i;
				return (pos);
			}
			j++;
		}
		j = 0;
		i++;
	}
	pos = i;
	return (pos);

}

