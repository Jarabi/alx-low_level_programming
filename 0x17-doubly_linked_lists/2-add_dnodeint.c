#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly-linked list.
 * @head: Pointer to pointer to head of list
 * @n: Value to insert into new node
 * Return: Address for the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	(*head)->prev = new_node;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
