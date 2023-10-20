#include "main.h"
/**
 * _strcat - concatentate two strings
 * @dest: type char str
 * @src: type char str
 * Return: pointer to result dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
