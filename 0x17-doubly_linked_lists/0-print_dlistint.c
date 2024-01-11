#include "lists.h"

/**
* print_dlistint -function that prints all the elements of a dlistint_t list.
* @h: the header
* Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);

}
