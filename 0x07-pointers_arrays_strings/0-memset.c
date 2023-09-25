#include <stdio.h>
/**
 * *_memset - fills some memory with cons byte
 * @s: the string to fills
 * @b: the byte value
 * @n: n bytes to fill
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (ptr);
}

