#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: is the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *nodes, *temp;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		nodes = ht->array[i];
		while (nodes != NULL)
		{
			temp = nodes->next;
			free(nodes->key);
			free(nodes->value);
			free(nodes);
			nodes = temp;
		}
	}
	free(ht->array);
	free(ht);
}

