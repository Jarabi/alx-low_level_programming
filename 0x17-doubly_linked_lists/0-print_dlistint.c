#include "lists.h"

/**
 * print_dlistint - Prints all elements of a doubly linked list
 * @h: Pointer to the head of the list
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *track = h;
	size_t list_size = 0;

	while (track != NULL)
	{
		printf("%d\n", track->n);
		track = track->next;
		list_size++;
	}
	return (list_size);
}
