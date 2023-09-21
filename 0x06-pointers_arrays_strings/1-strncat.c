#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @dest: string one
 * @src: string two
 * @n: number of byte to copy
 * Return: pointer of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; dest[i] != '\0' ; i++)
	;
	for (int j = 0 ; src[j] != '\0' && n > 0; n--, i++, j++)
	{
	dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
