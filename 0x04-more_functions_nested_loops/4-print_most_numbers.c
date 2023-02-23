#include "main.h"
/**
 * print_most_numbers - print numbers from 0 to 9 followed by new line
 * Except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int num = 0;

	do {
		if (!(num == 2 || num == 4))
			_putchar('0' + num);

		num++;
	} while (num < 10);

	_putchar('\n');
}
