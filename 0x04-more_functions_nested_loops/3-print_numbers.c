#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9 followed by new line
 *
 * Return: void
 */
void print_numbers(void)
{
	int num = 0;

	do {
		_putchar('0' + num);
		num++;
	} while (num < 10);

	_putchar('\n');
}
