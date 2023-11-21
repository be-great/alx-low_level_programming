#include "lists.h"
/**
* pop_listint - function that deletes the head node of a listint_t
* linked list, and
* returns the head node’s data (n).
* @head: the linked list header
* Return: the head n if it's empty return 0
*/
int pop_listint(listint_t **head)
{
	listint_t *tempnode;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	tempnode = *head;
	*head = (*head)->next;
	free(tempnode);
	return (n);
}
