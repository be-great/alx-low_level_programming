#include "main.h"

/**
 * *_strcpy - function that copy the string to author one
 * @dest: dest array
 * @src: source array
 * Return: the array that has copied the src array
 */

char *_strcpy(char *dest, char *src)
{


	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
