#include "main.h"
/**
 * *_calloc - function that allocates memory for an array, using malloc
 * Discription: creating calloc function , locate memory spaces
 * with initlize of 0 values not random values like malloc
 * @nmemb: number of array elements
 * @size:size of the array elements value
 * Return: pointer to the new located empty memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int len;
	int i = 0;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	ptr = malloc(nmemb * size);/*WRONG*/

	if (ptr == NULL)
		return (NULL);

	len = nmemb * size;

	while (i < len)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

