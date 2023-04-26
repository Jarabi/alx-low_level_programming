#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another.
 * @n: number to flip
 * @m: number to flip to
 *
 * Return: number of bits required to flip number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long xor_product = 0;
	unsigned long flip_count = 0;

	/* Get the XOR of n and m */
	xor_product = n ^ m;

	/* Count the number of set bits in the xor product */
	/* Iterate through `anding` xor_product and right bit */
	/* shifting until xor_product equals 0 */
	while (xor_product > 0)
	{
		flip_count += xor_product & 1;
		xor_product >>= 1;
	}
	return (flip_count);
}
