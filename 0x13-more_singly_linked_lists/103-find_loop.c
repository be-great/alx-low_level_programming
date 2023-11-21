#include "lists.h"

/**
* *find_listint_loop -  function that finds the loop in a linked list.
* @head: the node head
* Return: The address of the node where the loop starts
* or NULL if there is no loop
* rules: 1 -You are not allowed to use malloc, free or arrays
*        2- You can only declare a maximum of two variables in your function
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}

	return (NULL);
}
