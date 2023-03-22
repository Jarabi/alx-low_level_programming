#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array of integers
 * @size: elements in the array
 * @cmp: pointer to comparison function
 *
 * Return: index of first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
