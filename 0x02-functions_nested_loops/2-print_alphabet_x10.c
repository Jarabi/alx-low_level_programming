#include "main.h"

/**
 * print_alphabet_x10 - Function to print lowercase alphabet to stdout
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char str = 'a';

		while (str <= 'z')
		{
			_putchar(str);
			str++;
		}

		_putchar('\n');
		count++;
	}
}
