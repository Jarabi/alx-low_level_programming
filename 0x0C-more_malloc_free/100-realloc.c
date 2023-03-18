#include <stdlib.h>
#include "_memcpy.c"

/**
 * *_realloc - a function that reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: pointer to allocated space.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	if (new_size > old_size)
		_memcpy(p, ptr, old_size);
	else
		_memcpy(p, ptr, new_size);

	free(ptr);

	return (p);
}

