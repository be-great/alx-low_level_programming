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
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && n > 0)
	{
		dest[i] = src[j];
		n--;
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
