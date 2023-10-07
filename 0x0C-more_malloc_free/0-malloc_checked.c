#include "main.h"
/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: the size of memory need to locate
 * Return: pointer to allocated memory , fail exit with 98 status
 * value
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}

