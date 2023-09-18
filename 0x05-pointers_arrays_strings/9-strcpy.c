#include "main.h"

/**
 * *_strcpy - function that copy the string to author one
 * @dest: dest array
 * @src: source array
 * Return: the array that has copied the src array
 */

char *_strcpy(char *dest, char *src)
{


	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
