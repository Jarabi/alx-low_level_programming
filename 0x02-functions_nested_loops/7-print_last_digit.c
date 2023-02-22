#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @n: The number to check
 *
 * Return: The last number of n
 */
int print_last_digit(int n)
{
	/*int absVal = n >= 0 ? n : n * -1;*/
	int last = n % 10;

	last = last >= 0 ? last : last * -1;
	_putchar(last + '0');

	return (last);
}
