#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list,
 * and returns the head node’s data (n).
 * @head: pointer to the pointer to the head of the linked list
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	listint_t *pop_node;
	int data;

	/* Check if head is null*/
	if (head == NULL)
		return (0);

	pop_node = *head;
	*head = (*head)->next;

	/* copy data on head */
	data = pop_node->n;

	free(pop_node);
	return (data);
}
