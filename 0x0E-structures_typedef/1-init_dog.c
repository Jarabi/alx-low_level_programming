#include "dog.h"
#include "_strcpy.c"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d:		pointer to struct dog
 * @name:	name of dog
 * @age:	age of dog
 * @owner:	owner of dog
 *
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	_strcpy(d->name, name);
	d->age = age;
	_strcpy(d->owner, owner);
}
