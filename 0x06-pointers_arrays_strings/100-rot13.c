#include "main.h"

/**
 * *rot13 - shift char by 13 positon
 * @str: string to shift
 * Return: pointer of the str
 */
char *rot13(char *str)
{
	/* remember the capital -32*/
	char alph0[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alph13rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = str;
	int i = 0;

	/* loop each string */
	while (*str)
	{
		/*search the character in alph0*/
		while (i < 52)
		{
			/* check the char capital or small */
			if (*str == alph0[i])
			{
				*str = alph13rot[i];
				break;
			}
			i++;
		}
		str++;
		i = 0;
	}
	return (ptr);

}
