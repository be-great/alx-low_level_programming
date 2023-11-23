#include "lists.h"
/**
* delete_nodeint_at_index -  function that deletes the node at index index of
* a listint_t linked list.
* @head: the header of the linked list
* @index: index to delete
* Return:  1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *next;
	size_t size = 0;

	prev = *head;
	if (index != 0)
	{
		while (size != (index - 1) && prev != NULL)
		{
			prev = prev->next;
			size++;
		}
	}
	/* prev = null : check if the node is empty we can't delete anything*/
	/* prev->next and index = 0 : check the end of the node and index is larger*/
	/* than the number of element on the linked list*/
	if (prev == NULL || (prev->next == NULL && index != 0))
		return (-1);
	next = prev->next;

	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;

	}
	return (1);

}
