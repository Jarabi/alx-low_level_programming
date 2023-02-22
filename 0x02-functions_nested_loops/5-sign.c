#include "main.h"

/**
 * print_sign - returns the sign of a number
 * @n: The number to check
 *
 * Return: 1 and print + if n is greater than zero
 * 0 and print 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	} else if (n == 0)
	{
		value = 0;
		_putchar('0');
	} else
	{
		value = -1;
		_putchar('-');
	}

	return (value);
}
