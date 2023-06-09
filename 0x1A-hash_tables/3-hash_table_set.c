#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to add/update he key/value to
 * @key: the key. Cannot be an empty string
 * @value: the value associated with the key. Must be duplicated
 *
 * Return: 1 if success. 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	const unsigned char *_key;
	hash_node_t *item;
	int key_size = 0;

	/* Check if key is NULL */
	if (ht == NULL || key == NULL)
		return (0);

	/* Check if key is empty */
	while (key[key_size] != '\0')
		key_size += 1;

	if (key_size == 0)
		return (0);

	_key = (const unsigned char *) key;
	index = key_index(_key, ht->size);

	/* If key exists, replace value */
	if (k_ex(ht, index, key, value))
		return (1);

	/* Create new hash item */
	item = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);

	item->key = strdup(key);
	item->value = strdup(value);
	item->next = ht->array[index];
	ht->array[index] = item;

	return (1);
}

/**
 * k_ex - Checks if key exists in the hash table and replaces it's value
 * @t: The hash table
 * @idx: Index at current location in the hash table
 * @k: the key
 * @v: the value
 *
 * Return: 1 if key found and value replaced. 0 otherwise
 */
int k_ex(hash_table_t *t, unsigned long int idx, const char *k, const char *v)
{
	hash_node_t *current;

	current = t->array[idx];

	while (current)
	{
		if (strcmp(k, current->key) == 0)
		{
			free(current->value);
			current->value = strdup(v);
			return (1);
		}
		current = current->next;
	}
	return (0);
}
