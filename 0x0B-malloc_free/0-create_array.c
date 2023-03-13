#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: number of items in the array
 * @c: the char to initialize array with
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	arr = malloc(size * sizeof(char));

	/* Test for arr */
	/* printf("Size: %i, arr: %d\n", size, *arr); */

	if (*arr == 0)
		return (NULL);

	for (; i < size; i++)
		arr[i] = c;
	return (arr);
}
