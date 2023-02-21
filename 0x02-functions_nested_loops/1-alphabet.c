#include "main.h"

/**
 * print_alphabet - Function to print lowercase alphabet to stdout
 *
 * Return: void
 */
void print_alphabet(void)
{
	char str = 'a';

	while (str <= 'z')
	{
		_putchar(str);
		str++;
	}

	_putchar('\n');

	return;
}
