#include "lists.h"

/**
 * insert_nodeint_at_index - returns the sum of all the data of a linked list
 * @head: pointer to the pointer to the head of the linked list
 * @idx: index of the list where new node should be inserted
 * @n: value to be assigned to the new node
 *
 * Return: address of new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head, *new_node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = current;
		*head = new_node;
		return (new_node);
	}

	while (i < idx)
	{
		if (current == NULL || current->next == NULL)
			return (NULL);
		current = current->next;
		i++;
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
