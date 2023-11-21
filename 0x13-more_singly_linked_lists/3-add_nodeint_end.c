#include "lists.h"
/**
* *add_nodeint_end - function that adds a new node
* at the end of a listint_t list.
* @head: the header
* @n: the element to add
* Return: address of new element , or NULL if it  failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* create the new node*/

	listint_t *newnode, *tempnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	tempnode = *head;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (tempnode->next != NULL)
		{
			tempnode = tempnode->next;
		}
		tempnode->next = newnode;
	}
	return (*head);
}
