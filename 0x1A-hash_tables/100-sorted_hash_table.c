#include "hash_tables.h"

/**
* shash_table_create - function that creates a hash table.
* @size: size of the table
* Return: a pointer to the newly created hash table or null
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table0;
	unsigned long int i;

	table0 = malloc(sizeof(shash_table_t));
	if (!table0)
		return (NULL);

	table0->array = malloc(sizeof(shash_node_t *) * size);
	if (!table0->array)
		return (NULL);

	for (i = 0; i < size; i++)
		table0->array[i] = NULL;

	table0->size = size;
	table0->shead = NULL;
	table0->stail = NULL;

	return (table0);
}

/**
* add_atbeginning - adds a node at the beginning of a giving index
* @head: the head of the nodes
* @key: the key
* @value: value assocaited with that key
* Return: The node
*/
shash_node_t *add_atbeginning(shash_node_t **head, const char *key
				, const char *value)
{
	shash_node_t *node, *new_node;

	node = *head;

	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			break;
		}
	    node = node->next;
	}
	/*update value if it already exist*/
	if (node != NULL)
		return (node);
	/*add newnode if doesn't exist*/
	else
	{
		new_node = malloc(sizeof(shash_node_t));

		if (!new_node)
			return (NULL);

		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = *head;

		*head = new_node;
		return (new_node);
	}

}

/**
* add_totable - adds a node to the table
* @ht: pointer to the table
* @new_node: new node to add
* Return: no return
*/
void add_totable(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *node0, *node1;

	node0 = ht->shead;
	node1 = ht->shead;

	while (node0 != NULL)
	{
		if (strcmp(new_node->key, node0->key) == 0)
		{
			return;
		}
		else if (strcmp(new_node->key, node0->key) < 0)
		{
			new_node->sprev = node0->sprev;

			if (node0->sprev)
				node0->sprev->snext = new_node;
			else
				ht->shead = new_node;

			node0->sprev = new_node;
			new_node->snext = node0;
			return;
		}
		node1 = node0;
		node0 = node0->snext;
	}
	new_node->sprev = node1;
	new_node->snext = NULL;

	if (ht->shead)
		node1->snext = new_node;
	else
		ht->shead = new_node;

	ht->stail = new_node;
}

/**
* shash_table_set - function that adds an element to the hash table.
* @ht: the hash table to add to
* @key: the key
* @value: value assocaited with that key
* Return: 1 if Succeeded else 0
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *nodes, *new_node;
	unsigned long int size, index;

	if (!ht || !key || !value)
		return (0);

	size = ht->size;
	index = key_index((unsigned char *)key, size);
	nodes = ht->array[index];

	new_node = add_atbeginning(&(nodes), key, value);

	if (new_node == NULL)
		return (0);
	add_totable(ht, new_node);
	return (1);
}

/**
* shash_table_get - function that retrieves a value associated with a key.
* @ht: the hash table
* @key: the key
* Return: value associated with the element
* or NULL if key couldn’t be found
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;

	shash_node_t *nodes;

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
	return (NULL);
}

/**
* shash_table_print - function that prints a hash table.
* @ht: the hash table
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *nodes;
	unsigned long int i = 0;

	if (!ht)
		return;

	putchar('{');
	nodes = ht->shead;
	while (nodes != NULL)
	{
		if (i == 0)
			printf("'%s': '%s'", nodes->key, nodes->value);
		else
		{
			printf(", ");
			printf("'%s': '%s'", nodes->key, nodes->value);
		}
		nodes = nodes->snext;
		i = 1;
	}
	putchar('}');
	putchar('\n');
}

/**
* shash_table_print_rev - prints the keys and values of the shash table
* in reverse
*
* @ht: pointer to the shash table
* Return: no return
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node0;
	int i = 0;

	if (ht == NULL)
		return;

	printf("{");

	node0 = ht->stail;

	while (node0)
	{
		if (i == 0)
		{
			printf("'%s': '%s'", node0->key, node0->value);
		}
		else
		{
			printf(", ");
			printf("'%s': '%s'", node0->key, node0->value);
		}
		node0 = node0->sprev;
		i = 1;
	}

	printf("}\n");
}

/**
* shash_table_delete - function that deletes a hash table
* @ht: is the hash table
*/

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;

	shash_node_t *nodes, *temp;

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
