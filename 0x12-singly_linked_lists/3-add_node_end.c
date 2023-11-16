#include "lists.h"
/**
* _strlen - return the length of giving string
* @s: string to check
* Return: the length of the giving string
*/

int _strlen(const char *s)
{
	int count = 0;

	while (s[count])
	{
		count++;
	}
	return (count);
}

/**
* add_node_end - function that adds a new node at the end
* of a list_t list.
* @head: the head of the linked list
* @str: string to add at the last node (str needs to be duplicated)
* Return: the new head;
*/


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;
	int len;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	len = _strlen(str);
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
	return (*head);

}
