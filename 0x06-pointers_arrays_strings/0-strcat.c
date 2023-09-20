#include "main.h"
/**
 * _strcat - concatentate two strings
 * @dest: type char str
 * @src: type char str
 * Return: pointer to result dest
 */

char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; dest[i] != '\0' ; i++)
	{}
	for (int j = 0 ; src[j] != '\0' ; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
