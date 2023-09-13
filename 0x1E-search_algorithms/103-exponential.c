#include "search_algos.h"

size_t min(size_t first, size_t second);
int binary(int *array, int value, size_t low, size_t high);

/**
 * exponential_search - searches for a value in a sorted
 * array of integers using the Exponential search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound, low, high;

	if (!array)
		return (-1);

	bound = 1;

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = min(bound, size - 1);

	printf("Value found between indexes [%ld] and [%ld]\n", low, high);

	return (binary(array, value, low, high));
}

/**
 * min - returns the minimum of two values
 * @first: first value
 * @second: second value
 *
 * Return: the minimum value
 */
size_t min(size_t first, size_t second)
{
	size_t min_val = (first < second) ? first : second;

	return (min_val);
}

/**
 * binary - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @value: the value to search for
 * @low: the first index to search in the array
 * @high: the last index to search in the array
 *
 * Return: the index where value is located or -1
 */
int binary(int *array, int value, size_t low, size_t high)
{
	size_t idx, mid;

	if (!array)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");

		for (idx = low; idx <= high; idx++)
		{
			printf("%d", array[idx]);

			if (idx < high)
				printf(", ");
			else
				printf("\n");
		}

		mid = (low + high) / 2;

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
