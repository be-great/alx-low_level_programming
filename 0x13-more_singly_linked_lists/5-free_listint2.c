#include "lists.h"
/**
* free_listint2 - a function that frees a listint_t list.
* @head: the linkend list header
*/
void free_listint2(listint_t **head)
{
	listint_t *tempnode;

	tempnode = *head;
	while (tempnode != NULL)
	{

		*head = (*head)->next;
		free(tempnode);
		tempnode = *head;
	}


}
