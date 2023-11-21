#include "lists.h"
/**
* free_listint - function that frees a listint_t list.
* @head: the head
*/
void free_listint(listint_t *head)
{

	listint_t *tempnode;

	tempnode = head;
	while (tempnode != NULL)
	{

		head = head->next;
		free(tempnode);
		tempnode = head;
	}


}
