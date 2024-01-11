#include "lists.h"
/**
* free_dlistint -function that frees a dlistint_t list.
* @head: the head
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		free(current);
		head = head->next;
		current = head;
	}
}
