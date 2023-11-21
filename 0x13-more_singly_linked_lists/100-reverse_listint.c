#include "lists.h"
/**
* *reverse_listint - function that reverses a listint_t linked list.
* @head: the linked head
* Return: pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	return (*head = prev);

}
