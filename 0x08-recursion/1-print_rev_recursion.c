#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: string to be printed
 *
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
	/* Check if string is empty */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	/* Move pointer to next character*/
	_print_rev_recursion(s + 1);

	/* Print the characters in reverse */
	_putchar(*s);
}
