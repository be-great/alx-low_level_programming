#include "main.h"

/**
 * *_strcpy - function that copy the string to author one
 * @dest: dest array
 * @src: source array
 * Return: the array that has copied the src array
 */

char *_strcpy(char *dest, char *src)
{


	int i;
	int len;

	len = strlen(src);
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
