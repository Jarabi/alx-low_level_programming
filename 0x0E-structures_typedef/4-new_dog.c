#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog -	a function that creates a new dog
 * @name:	name of dog
 * @age:	age of dog
 * @owner:	owner of dog
 *
 * Return: Pointer to struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n;

	n = malloc(sizeof(dog_t));

	if (n == NULL)
		return (NULL);

	n->name = strdup(name);
	n->age = age;
	n->owner = strdup(owner);

	if (n->name == NULL || n->owner == NULL)
	{
		free(n->name);
		free(n->owner);
		free(n);
		return (NULL);
	}
	return (n);
}
