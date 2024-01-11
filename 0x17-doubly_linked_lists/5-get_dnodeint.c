#include "lists.h"
/**
* get_dnodeint_at_index - Get the dnodeint at index object
* @head: the head of the list
* @index: the index to get
* Return: the node at giving index or null if not found
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	dlistint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}

	return (NULL);
}
