#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low, high, step;

	if (!array)
		return (-1);

	low = 0;
	high = 0;
	step = (int)sqrt(size);

	/* Finding block where value is present (if present) */
	while (array[high] < value && high < size)
	{
		printf("Value checked array[%ld] = [%d]\n", high, array[high]);
		low = high;
		high += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", low, high);

	/* Linear search from idx to step */
	for (; low < size; low++)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);

		/* If element is found */
		if (array[low] == value)
			return (low);
	}

	return (-1);
}
