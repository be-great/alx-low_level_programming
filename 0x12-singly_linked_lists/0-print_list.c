#include "lists.h"

/**
* print_list - function that prints all the elements of a list_t list
* @h: the object linked list
* Return: the numberof nodes , if str = NULL print [0] (nil)
*/
size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		size++;
	}
	return (size);
}
