#include <stdio.h>
/**
 * *_strchr - function locates a character in a string
 * @s: string
 * @c: character to find
 * Return: pointer to first occurence of c
 */

char *_strchr(char *s, char c)
{

	char *result;
	/* loop and check for char c*/
	do {
		if (*s == c)
		{
			result = s;
			break;
		}
	} while (*s++);

	return (result);
}

