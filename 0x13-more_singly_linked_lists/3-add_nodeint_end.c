#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list.
 * @head: pointer to the pointer of the head of the linked list
 * @n: member value of the node
 *
 * Return: the address the of new element if success; NULL if fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	/* check if head point to NULL */
	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;

		/* Get current last node */
		while (last_node->next != NULL)
			last_node = last_node->next;

		last_node->next = new_node;
		/* *head = last_node; */
	}
	return (new_node);
}
