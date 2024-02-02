#include "hash_tables.h"

/**
* hash_table_create - create a a hash table
* @size: the size of the array
* Return: a pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table0;
	unsigned long int i;

	table0 = malloc(sizeof(hash_table_t));
	if (!table0)
	{
		return (NULL);
	}
	table0->size = size;
	table0->array = malloc(sizeof(hash_node_t *) * size);
	if (!table0->array)
	{
		return (NULL);
	}
	/*initialize each slot with NULL*/
	for (i = 0; i < size; i++)
	{
		table0->array[i] = NULL;
	}
	return (table0);
}
