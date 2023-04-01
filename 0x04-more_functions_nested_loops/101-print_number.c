#include "main.h"

int digit_count(int n);

/**
 * print_number - Function to print out passed integer
 * @n: integer to print
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int digits;
	int num = n;

	if (num == 0)
	{
		_putchar(48);
		return;
	}

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}

	/* get the digit count */
	digits = digit_count(num);

	/* print out the digits */
	while (digits != 0)
	{
		_putchar('0' + num / digits);
		num %= digits;
		digits /= 10;
	}
}

/**
 * digit_count - calculates number of digits
 * @n: number to check
 *
 * Return: number of digits
 */

int digit_count(int n)
{
	unsigned int dc = 1;

	while ((n / dc) > 9)
		dc *= 10;
	return (dc);
}
