#include "lists.h"

/**
 * add_dnodeint_end - Add a new node at the end of a doubly-linked list
 * @head: Pointer to pointer to head of list
 * @n: Node data
 * Return: Address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);

	temp = *head;
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		temp = new_node;
	}
	else
	{
		/* Make sure temp is pointing to the last node */
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
		new_node->prev = temp;
		temp = new_node;
	}
	return (new_node);
}
