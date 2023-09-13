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
	int l, m, h;

	if (!array)
		return (-1);
	l = 0;
	h = size - 1;

	while ((array[h] != array[l]) && (value >= array[l]) && (value < array[h]))
	{
		m = l + ((value - array[l]) * (h - l) / (array[h] - array[l]));

		printf("Value checked array[%d] = [%d]\n", m, array[m]);

		if (array[m] < value)
			l = m + 1;
		else if (value < array[m])
			h = m - 1;
		else
			return (m);
	}

	if (value == array[l])
		return (l);

	return (-1);
}
