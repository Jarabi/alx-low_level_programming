#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	if (!array)
		return (-1);

	while (idx < size)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);

		if (array[idx] == value)
			return (idx);
		idx += 1;
	}
	return (-1);
}
