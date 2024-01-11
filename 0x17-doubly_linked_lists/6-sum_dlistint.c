#include "lists.h"

/**
* sum_dlistint - sum the list at giving point
* @head: the header
* Return: the sum of all data
*/
int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
