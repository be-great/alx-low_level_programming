#include "main.h"
/**
 * *_realloc - function that reallocates a memory block using
 * malloc and free
 * Description: creating realloc function , it resize aready sized pointer
 * @ptr: the pointer
 * @old_size: the old size
 * @new_size: the new size
 * Return: if new_size = old_size return ptr,or null
 * when new_size = 0 and ptr != null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		ptr = malloc(new_size);

	free(ptr);
	ptr = malloc(new_size);

	if (ptr == NULL)
		return (NULL);
	return (ptr);

}
