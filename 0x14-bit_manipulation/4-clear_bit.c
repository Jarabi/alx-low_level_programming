#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number
 * @index: index starting from 0 of the bit you want to set
 *
 * Return: 1, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	/**
	 * Check if index is within the valid range of
	 * unsigned integer
	 */
	if (index > (sizeof(unsigned int) * 8))
		return (-1);

	/* set mask */
	mask = 1 << index;

	*n = *n & ~mask;

	return (1);
}
