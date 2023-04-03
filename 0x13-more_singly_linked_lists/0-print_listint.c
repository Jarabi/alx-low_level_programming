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

	while (h != NULL)
	{
		if (!h->n)
			printf("(nil)\n");
		else
			printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
