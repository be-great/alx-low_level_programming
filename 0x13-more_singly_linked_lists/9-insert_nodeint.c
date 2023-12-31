#include "lists.h"
/**
* *insert_nodeint_at_index - function that inserts a new node
* at a given position.
* @head: the head of the linked list
* @idx: the index
* @n: the data to insert
* Return: address of the newnode or null if failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *tempnode;
	size_t size = 0;
	/*create the new node*/
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}

	tempnode = *head;
	if (idx != 0)
	{
		while (size != (idx - 1) && tempnode != NULL)
		{
			tempnode = tempnode->next;
			size++;
		}
	}
	/* you didn't found index= 9 and you node have 5 element for Example*/
	if (tempnode == NULL && idx != 0)
		return (NULL);
	newnode->n = n;
	/* if index is the first element*/
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	/* else for other index 1,2,...etc*/
	else
	{
		newnode->next = tempnode->next;
		tempnode->next = newnode;
	}
	return (newnode);

}
