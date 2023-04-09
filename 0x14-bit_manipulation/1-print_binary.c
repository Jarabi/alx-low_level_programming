#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: number
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int i, n_copy, width;
	char bit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	n_copy = n;
	width = 0;

	while (n_copy > 0)
	{
		n_copy >>= 1;
		width++;
	}

	for (i = 1 << (width - 1); i > 0; i >>= 1)
	{
		bit = (n & i) ? '1' : '0';
		_putchar(bit);
	}
}
