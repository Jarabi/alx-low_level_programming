#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number
 * @index: index starting from 0 of the bit you want to get
 *
 * Return: value of bit, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	/**
	 * Check if index is within the valid range of
	 * unsigned integer
	 */
	if (index > (sizeof(unsigned int) * 8))
		return (-1);

	/**
	 * Loop through successive half values of n
	 * until i is less than index
	 */
	for (i = 0; i < index; i++)
		n >>= 1;

	/* Return 1 or 0 */
	return (n & 1);
}
