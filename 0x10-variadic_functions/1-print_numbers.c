#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between the numbers
 * @n: Number of integers
 * @...: Unnamed arguments
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	uint i;

	if (n == 0)
		return;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(list, uint));

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
		else
			putchar('\n');
	}
	va_end(list);
}
