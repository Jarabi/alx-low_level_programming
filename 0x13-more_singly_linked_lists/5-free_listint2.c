#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the pointer to the head of the linked list
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	current = *head;

	while (current)
	{
		listint_t *next = current->next;

		free(current);
		current = next;
	}

	*head = NULL;
}
