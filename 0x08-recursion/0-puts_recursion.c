#include "main.h"
/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s: string to be printed
 *
 * Return: void.
 */
void _puts_recursion(char *s)
{
	/* Check if string is empty */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	/* Print the first character */
	_putchar(*s);

	/* Move pointer to next character*/
	_puts_recursion(s + 1);
}
