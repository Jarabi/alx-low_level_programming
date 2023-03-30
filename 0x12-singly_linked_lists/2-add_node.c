#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to a pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: address of new element if success. NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t str_len;
	char *str_cpy;

	/* check if head or str are NULL */
	if (head == NULL || str == NULL)
		return (NULL);

	/* allocate memory for new node */
	new_node = malloc(sizeof(list_t));

	/* check if malloc returns NULL */
	if (new_node == NULL)
		return (NULL);

	/* get length of str */
	str_len = strlen(str);

	/* copy contents of str */
	str_cpy = strdup(str);

	/* check if str_cpy is NULL */
	if (str_cpy == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* copy contents of str to new node */
	new_node->str = str_cpy;
	new_node->len = str_len;
	new_node->next = *head;

	/* update head's next */
	*head = new_node;

	return (new_node);
}
