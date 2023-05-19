#include "lists.h"

/**
 * get_dnodeint_at_index - Returns nth node of a doubly-linked list
 * @head: Pointer to a list
 * @index: Index of the node starting from 0
 * Return: Node at index, or NULL if not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int idx = 0;

	current = head;

	while (current != NULL && idx <= index)
	{
		if (idx == index)
			return (current);
		current = current->next;
		idx++;
	}
	return (NULL);
}
