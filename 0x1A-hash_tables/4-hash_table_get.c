#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: the hash table to look into
 * @key: they key to look for
 *
 * Return: the value, or NULL if key not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	const unsigned char *_key;
	hash_node_t *item;

	if (ht == NULL || key == NULL)
		return (NULL);

	_key = (const unsigned char *) key;
	index = key_index(_key, ht->size);

	item = ht->array[index];

	if (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
	}
	return (NULL);
}
