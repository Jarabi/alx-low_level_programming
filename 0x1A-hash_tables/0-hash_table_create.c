#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the hash table
 *
 * Return: pointer to the table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *t;
	unsigned long int i;

	t = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (t == NULL)
		return (NULL);

	t->size = size;
	t->array = (hash_node_t **) calloc(t->size, sizeof(hash_node_t *));

	for (i = 0; i < t->size; i++)
		t->array[i] = NULL;
	return (t);
}
