#include "lists.h"
/**
* free_list - function that frees a list_t list
* @head: the head;
*/
void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		free(current->str);
		free(current);
		head = head->next;
		current = head;
	}
}
