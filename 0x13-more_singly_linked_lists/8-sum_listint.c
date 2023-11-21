#include "lists.h"
/**
* sum_listint - function that
* returns the sum of all the data (n) of a listint_t linked list.
* @head: the head of the linked list
* Return: sum of n data of the node or 0 if empty
*/
int sum_listint(listint_t *head)
{
	size_t sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
