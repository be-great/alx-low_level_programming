#include "lists.h"

/**
* free_listp2_ - a function that frees a listp list.
* @head: the linkend list header
*/
void free_listp2_(listp **head)
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
* free_listint_safe - This function can free lists with a loop
* @h: the node head
* Return: the size of the list that was free
* Description: The function sets the head to NULL
*/
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listp *new, *ptr = NULL;
	listint_t *temp;

	/* create the new storing array, check for freeing**/
	while (*h)
	{
		new = malloc(sizeof(listp));
		if (!new)
		{
			free(new);
			exit(98);
		}
		new->p = (void *)*h;
		new->next = ptr;
		ptr = new;
		/* loop to check we didn't get that headers*/
		/* NULL <- p1 <- p2 <- p3*/
		new = ptr;
		while (new->next != NULL)
		{
			new = new->next;
			if (*h == new->p)
			{
				/* free the new struct object you create*/
				*h = NULL;
				free_listp2_(&ptr);
				return (size);
			}

		}
	    temp = *h;
		*h = (*h)->next;
		free(temp);
		size++;
	}
	*h = NULL;
	/* free the new struct you created*/
	free_listp2_(&ptr);
	return (size);
}
