#include "main.h"

/**
 * print_sign - returns the sign of a number
 * @n: The number to check
 *
 * Return: 1 and print + if n is greater than zero
 * Return: 0 and print 0 if n is zero
 * Return: -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	int value;
	char sign = n == 0 ? '0' : n > 0 ? '+' : '-';

	switch (sign)
	{
		case '+':
			value = 1;
			break;
		case '0':
			value = 0;
			break;
		case '-':
			value = -1;
			break;
	}

	_putchar(sign);
	return (value);
}
