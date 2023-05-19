#include "lists.h"

dlistint_t *create_node(int n);
/**
 * insert_dnodeint_at_index - Insert a new node at a given position
 * @h: Pointer to pointer to a list
 * @idx: Index of the list where node should be added starting from 0
 * @n: Node data
 * Return: Address of new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new_node;
	unsigned int index = 0;

	/* Check if list is empty and idx is not 0 */
	if (h == NULL || (*h == NULL && idx != 0))
		return (NULL);

	current = *h;
	new_node = create_node(n);

	/* Check if idx is 0 AND list is empty */
	if (idx == 0)
	{
		if (*h == NULL)
			*h = new_node;
		else
		{
			new_node->next = current;
			current->prev = new_node;
			*h = new_node;
		}
		return (new_node);
	}

	/* If idx > 0, iterate until idx */
	while (current->next != NULL || index + 1 == idx)
	{
		if (index + 1 == idx)
		{
			if (current->next != NULL)
				current->next->prev = new_node;
			new_node->next = current->next;
			current->next = new_node;
			new_node->prev = current;
			return (new_node);
		}
		current = current->next;
		index++;
	}
	free(new_node);
	return (NULL);
}

/**
 * create_node - Helper function to create new node
 * @n: Node data
 * Return: address of new node
 */
dlistint_t *create_node(int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}
