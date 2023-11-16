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
* add_node - function that add a new node at the
* beginning of a list_t list.
* @head: the beginning of that list
* @str: the string to add
* Return: address of the new element , NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	len = _strlen(str);
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
