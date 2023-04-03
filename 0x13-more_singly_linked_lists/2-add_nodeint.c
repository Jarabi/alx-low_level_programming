#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list.
 * @head: pointer to the pointer of the head of the linked list
 * @n: member value of the node
 *
 * Return: the address the of new element if success; NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
