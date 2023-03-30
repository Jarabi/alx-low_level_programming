#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to head of list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t el_count = 0;

	while (h != NULL)
	{
		h = h->next;
		el_count++;
	}
	return (el_count);
}
