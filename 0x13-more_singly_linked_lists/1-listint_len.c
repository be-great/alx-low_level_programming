#include "lists.h"
/**
* listint_len - a function that returns the number
* of elements in a linked listint_t list.
* @h: The header
* Return: number of elements in hte list
*/
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
