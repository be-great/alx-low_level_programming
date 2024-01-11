#include "lists.h"
#include <stdlib.h>

/**
* delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
* linked list.
* @head: pointer to a pointer to the head of the doubly linked list
* @index: index of the node to be deleted, starting from 0
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *prev, *next;
	size_t size = 0;

	if (!head || !(*head))
		return (-1);

	current = *head;
	if (index != 0)
	{
		while (size != index && current != NULL)
		{
			current = current->next;
			size++;
		}
	}

	if (current == NULL)
		return (-1);

	prev = current->prev;
	next = current->next;

	if (prev)
		prev->next = next;
	else
		*head = next;

	if (next)
		next->prev = prev;

	free(current);
	return (1);
}
