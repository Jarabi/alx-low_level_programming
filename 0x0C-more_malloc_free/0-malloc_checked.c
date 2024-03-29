#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - A function that allocates memory using malloc
 * @b: bytes to allocate
 *
 * Return: Nothing.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
