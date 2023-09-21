#include "main.h"
/**
 * *_strncpy - function that copies a string.
 * @dest: destination string
 * @src: source string
 * @n: number of byte to copy
 * Return: the dest pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
