#include "hash_tables.h"

/**
* hash_table_set - function that adds an element to the hash table.
* @ht: the hash table to add to
* @key: the key
* @value: value assocaited with that key
* Return: 1 if Succeeded else 0
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nodes, *new_node;
	hash_node_t *prev;
	unsigned long int size, index;

	/*check if argument not null or empty*/

	if (!ht || !key || !value)
		return (0);

	/*check if key already exist*/
	size = ht->size;
	index = key_index((unsigned char *)key, size);
	nodes = ht->array[index];

	while (nodes != NULL)
	{
		if (strcmp(nodes->key, key) == 0)
			break;
		nodes = nodes->next;
	}
	/*update value if it already exist*/
	if (nodes != NULL)
	{
		free(nodes->value);
		nodes->value = strdup(value);
	}
	/*add newnode if doesn't exist*/
	else
	{
		new_node = malloc(sizeof(hash_node_t *));
		if (!new_node)
			return (0);
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		prev = ht->array[index];
		new_node->next = prev;
		ht->array[index] = new_node;

	}
	return (1);
}
