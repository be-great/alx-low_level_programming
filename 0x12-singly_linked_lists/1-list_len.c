#include "lists.h"
/**
 * list_len - function that returns the number of elements in
 * linked list_t list.
 * @h: the object linked list
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
