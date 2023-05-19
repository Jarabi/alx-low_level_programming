#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at specified index
 * of a doubly-linked list
 * @head: Pointer to pointer to head of a list
 * @index: Index of  the node to be deleted
 *
 * Return: 1 if secceeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int position = 0;

	/* Check if head is null or pointing to null */
	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	/* Check if index is 0 */
	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (position == index)
		{
			if (current->next != NULL)
				current->next->prev = current->prev;
			if (current->prev != NULL)
				current->prev->next = current->next;
			free(current);
			return (1);
		}
		current = current->next;
		position++;
	}
	return (-1);
}
