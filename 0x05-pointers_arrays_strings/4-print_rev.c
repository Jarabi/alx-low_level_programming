#include "main.h"
/**
 * print_rev - Function that prints a string in reverse followed by a newline
 * @str: pointer to string
 *
 * Return: Nothing
 */
void print_rev(char *str)
{
	int i, len = 0;

	/* Get length of string */
	while (*(str + len) != '\0')
		len++;

	/* Reverse string */
	for (i = (len - 1); i >= 0; i--)
		_putchar(*(str + i));

	_putchar('\n');
}
