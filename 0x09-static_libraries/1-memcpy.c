#include "main.h"
/**
 * *_memcpy - Entry point
 * @dest: to
 * @src: from
 * @n: number of bytes to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	/*loop throw n +1 with the null byte*/
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

