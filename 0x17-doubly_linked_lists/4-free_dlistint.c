#include "lists.h"

/**
 * free_dlistint - Frees a doubly-linked list
 * @head: Pointer to list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;

	if (head == NULL)
		return;

	while (current->next != NULL)
	{
		current = current->next;
		free(current->prev);
	}
	free(current);
}
