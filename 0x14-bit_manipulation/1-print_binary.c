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

	if (n > 1)
	{
		/**
		 * call print_binary recursively with successive
		 * half values of n, until n <= 1
		 */
		print_binary(n >> 1);
	}

	/* determine if (n & 1) yields a non-zero value or not */
	bit = (n & 1) ? '1' : '0';
	_putchar(bit);
}
