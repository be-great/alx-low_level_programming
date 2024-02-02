#include "hash_tables.h"

/**
* hash_table_get - function that retrieves a value associated with a key.
* @ht: the hash table
* @key: the key
* Return: value associated with the element
* or NULL if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *nodes;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	nodes = ht->array[index];
	while (nodes)
	{
		if (strcmp(nodes->key, key) == 0)
			break;
		nodes = nodes->next;
	}
	if (nodes)
		return (nodes->value);
	else
		return (NULL);

}

