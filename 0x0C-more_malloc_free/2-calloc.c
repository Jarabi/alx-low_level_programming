#include <stdlib.h>


/**
 * *_calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: array elements
 * @size: the size (bytes) of each element
 *
 * Return: Pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p != NULL)
	{
		i = 0;
		while (i < (nmemb * size))
		{
			p[i] = 0;
			i++;
		}
		return (p);
	}

	return (NULL);
}
