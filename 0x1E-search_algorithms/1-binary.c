#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t idx, left, mid, right;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");

		for (idx = left; idx <= right; idx++)
		{
			printf("%d", array[idx]);

			if (idx < right)
				printf(", ");
			else
				printf("\n");
		}

		mid = (left + right) / 2;

		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
