#include <math.h>
#include "search_algos.h"

size_t min(size_t first, size_t second);

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
	size_t idx, step;

	if (!array)
		return (-1);

	idx = 0;
	step = sqrt(size);

	/* Finding block where value is present (if present) */
	while (array[step] <= value && step < size)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		idx = step;
		step += sqrt(size);

		if (step > size - 1)
			return (-1);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", idx, step);

	/* Linear search from idx to step */
	for (; idx < step; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);

		/* If element is found */
		if (array[idx] == value)
			return (idx);
	}

	return (-1);
}

/**
 * min - returns the minimum of two values
 * @first: first value
 * @second: second value
 *
 * Return: The minimum value
 */
size_t min(size_t first, size_t second)
{
	return (first < second ? first : second);
}
