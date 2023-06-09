#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *next;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		current = ht->array[i];
		while (current)
		{
			next = current->next;

			free(current->value);
			free(current->key);
			free(current);

			current = next;
		}
		i += 1;
	}
	free(ht->array);
	free(ht);
}
