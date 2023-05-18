#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly-linked list
 * @h: Pointer to head of list
 * Return: Size of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t list_size = 0;
	const dlistint_t *track = h;

	while (track != NULL)
	{
		track = track->next;
		list_size++;
	}
	return (list_size);
}
