#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: number
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int i, j, k;
	char bit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	j = n;
	k = 0;

	while (j > 0)
	{
		j >>= 1;
		k++;
	}

	for (i = 1 << (k - 1); i > 0; i >>= 1)
	{
		bit = (n & i) ? '1' : '0';
		_putchar(bit);
	}
}
