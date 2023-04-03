#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list
 * @h: pointer to the head of the linked list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *current;

	current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		nodes++;
		current = current->next;
	}
	return(nodes);
}
