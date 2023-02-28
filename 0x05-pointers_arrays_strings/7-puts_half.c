#include "main.h"
/**
 * puts_half - Function that prints half of a string, followed by a new line.
 * @str: string
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i, len = 0, start_of_2h;

	/* Get length of string */
	while (*(str + len) != '\0')
		len++;

	start_of_2h = (len % 2 == 0) ?
		len / 2 :
		((len - 1) / 2) + 1;

	for (i = start_of_2h; i < len; i++)
		_putchar(*(str + i));

	_putchar('\n');
}
