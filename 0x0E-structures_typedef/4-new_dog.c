#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include "_strcpy.c"

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

	/* allocate memory for name */
	n->name = malloc(strlen(name) + 1);

	if (n->name == NULL)
	{
		free(n);
		return (NULL);
	}

	/* allocate memory for owner */
	n->owner = malloc(strlen(owner) + 1);

	if (n->owner == NULL)
	{
		free(n->name);
		free(n);
		return (NULL);
	}

	/* copy/assign values to allocated memory */
	_strcpy(n->name, name);
	_strcpy(n->owner, owner);
	n->age = age;

	return (n);
}
