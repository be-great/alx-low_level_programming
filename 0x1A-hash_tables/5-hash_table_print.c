#include "hash_tables.h"


/**
* hash_table_print - function that prints a hash table.
* @ht: the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nodes;

	unsigned long int i, j = 0;

	if (!ht)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		nodes = ht->array[i];
		while (nodes != NULL)
		{
			if (j == 0)
				printf("'%s': '%s'", nodes->key, nodes->value);
			else
				printf(", '%s': '%s'", nodes->key, nodes->value);
			nodes = nodes->next;
			j = 1;
		}
	}
	printf("}\n");
}
