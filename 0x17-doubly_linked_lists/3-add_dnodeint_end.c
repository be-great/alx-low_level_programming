#include "lists.h"
/**
* add_dnodeint_end -  function that adds
* a new node at the end of a dlistint_t list.
* @head: the head
* @n: the data
* Return: the address of the header
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	new_node->prev = current;
	current->next = new_node;
	return (*head);
}
