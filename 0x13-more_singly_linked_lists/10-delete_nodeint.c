#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: pointer to pointer to the head of the linked list
 * @index: index of the node to delete
 *
 * Return: sum of data (int).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev_node;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);

	prev_node = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(prev_node);
		return (1);
	}

	while (i < index)
	{
		if (prev_node->next == NULL)
			return (-1);
		prev_node = prev_node->next;
	}

	current = prev_node;
	prev_node->next = current->next;
	free(current);
	return (1);
}
