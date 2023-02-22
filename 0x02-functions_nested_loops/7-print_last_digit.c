#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @n: The number to check
 *
 * Return: The last number of n
 */
int print_last_digit(int n)
{
	int absVal = n < 0 ? n * -1 : n;
	int last = absVal % 10;

	_putchar('0' + last);

	return (last);
}
