#include "dog.h"
#include <stdio.h>

/**
 * print_dog -	a function that prints a struct dog
 * @d:		pointer to struct dog
 *
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	char *n;
	float a;
	char *o;

	if (d == NULL)
		return;

	n = d->name == NULL ? "(nil)" : d->name;
	a = d->age; /* != 0 ? d->age : "(nil)"; */
	o = d->owner == NULL ? "(nil)" : d->owner;

	printf("Name: %s\n", n);
	printf("Age: %.6f\n", a);
	printf("Owner: %s\n", o);
}
