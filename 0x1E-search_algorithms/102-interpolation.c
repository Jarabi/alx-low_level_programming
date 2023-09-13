#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of
 * integers using the Interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int l, h;
	size_t pos;

	if (!array)
		return (-1);
	l = 0;
	h = size - 1;

	while ((array[h] != array[l]) && (value >= array[l]) && (value < array[h]))
	{
		pos = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] < value)
			l = pos + 1;
		else if (value < array[pos])
			h = pos - 1;
		else
			return (pos);
	}

	if (value == array[l])
		return (l);

	printf("Value checked array[%d] is out of range\n", value);
	return (-1);
}
