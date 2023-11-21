#include "lists.h"

/**
* free_listp2 - a function that frees a listp list.
* @head: the linkend list header
*/
void free_listp2(listp **head)
{
	listp *tempnode, *temp2;

	if (head != NULL)
	{
		temp2 = *head;
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


/**
* print_listint_safe - function that prints a listint_t linked list
* @head: the node head
* Return: the number of node in the list
* Description: 1 ->  2 -> 3
*                    |___ |
* This is a cycle we need to detect where that
* happend return the header that do that (3)
*/


size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0;
	listp *new, *ptr = NULL;

	/* create the new storing array, check for freeing**/
	while (head)
	{
		new = malloc(sizeof(listp));
		if (!new)
		{
			free(new);
			exit(98);
		}
		new->p = (void *)head;
		new->next = ptr;
		ptr = new;
		/* loop to check we didn't get that headers*/
		/* NULL <- p1 <- p2 <- p3*/
		new = ptr;
		while (new->next != NULL)
		{
			new = new->next;
			if (head == new->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				/* free the new struct object you create*/
				free_listp2(&ptr);
				return (size);
			}

		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		size++;
	}
	/* free the new struct you created*/
	free_listp2(&ptr);
	return (size);
}
