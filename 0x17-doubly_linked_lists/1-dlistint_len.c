#include "lists.h"
/**
* dlistint_len - function that returns the number of elements in a linked
* dlistint_t list.
* @h: the header
* Return: the length of the linkend list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
