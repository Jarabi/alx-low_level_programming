#include <stdlib.h>

/**
 * *array_range - a function that creates an array of integers.
 * @min: min value
 * @max: max value
 *
 * Return: Pointer to newly created array.
 */
int *array_range(int min, int max)
{
	int *p;
	int i = 0, arr_size;

	/* check if min > max */
	if (min > max)
		return (NULL);

	/* calculate size of array */
	arr_size = max - min + 1;

	/* allocate memory for array */
	p = malloc(sizeof(int) * arr_size);

	/* check if malloc returns NULL */
	if (p == NULL)
		return (NULL);

	/* fill array with integers from min to max */
	while (i < arr_size)
	{
		p[i] = min + i;
		i++;
	}

	return (p);
}
