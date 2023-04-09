#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: index starting from 0 of the bit you want to set
 *
 * Return: 1, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/**
	 * Check if index is within the valid range of
	 * unsigned integer
	 */
	if (index > (sizeof(unsigned int) * 8))
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
