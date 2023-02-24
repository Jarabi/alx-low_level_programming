#include "main.h"

int _pow(int base, int power);

/**
 * print_number - Function to print out passed integer
 *
 * @n: integer to print
 *
 * Return: void
 */

void print_number(int n)
{
	int first_digit, position, zeros, count = 0, input = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/* get the number of digits in the input*/
	while (input != 0)
	{
		input /= 10;
		count++;
	}

	/* handle negative numbers*/
	if (n < 0)
	{
		_putchar(45);
		n *= -1;
	}

	/* print the digits */
	zeros = count - 1;

	while (zeros >= 0)
	{
		position = _pow(10, zeros);
		first_digit = n / position;
		_putchar('0' + first_digit);
		n -= (first_digit * position);
		zeros--;
	}
}

/**
 * _pow - calculates the result of raising an integer to a power
 *
 * @base: the base
 * @power: the power to raise to
 *
 * Return: the result
 */
int _pow(int base, int power)
{
	int result = 1;

	while (power > 0)
	{
		result *= base;
		power--;
	}

	return (result);
}
