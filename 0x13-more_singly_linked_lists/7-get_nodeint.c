#include "lists.h"
/**
* *get_nodeint_at_index - function that returns
* the nth node of a listint_t linked list.
* @head: the header of the link list
* @index: the index to check
* Return:  the node or null if not found
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tempnode;
	size_t size = 0;

	tempnode = head;
	while (size != index && tempnode != NULL)
	{
		tempnode = tempnode->next;
		size++;
	}
	return (tempnode);


}
