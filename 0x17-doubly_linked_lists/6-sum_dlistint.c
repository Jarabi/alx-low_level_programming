#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data of a doubly-linked list.
 * @head: Pointer to list
 * Return: Sum of numbers, or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	if (head == NULL)
		return (0);

	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
