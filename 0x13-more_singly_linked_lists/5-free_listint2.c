#include "lists.h"
/**
* free_listint2 - a function that frees a listint_t list.
* @head: the linkend list header
*/
void free_listint2(listint_t **head)
{
	listint_t *tempnode, *temp2;

	temp2 = *head;
	if (*head != NULL)
	{
		tempnode = temp2;
		while (tempnode != NULL)
		{

			temp2 = (temp2)->next;
			free(tempnode);
			tempnode = temp2;
		}
		*head = NULL;
	}

}
