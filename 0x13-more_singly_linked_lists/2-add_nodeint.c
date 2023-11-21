#include "lists.h"
/**
* *add_nodeint - function that adds a new node at
* the beginning of a listint_t list.
* @head: the header
* @n: element to add
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{

	/*create the new node*/
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
