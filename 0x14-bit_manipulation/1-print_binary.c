#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: number
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	char bit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/* half the value of n */
	print_binary(n >> 1);

	bit = (n & 1) ? '1' : '0';
	_putchar(bit);
}
