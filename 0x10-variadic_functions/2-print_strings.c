#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints numbers, followed by a new line.
 * @separator: string to be printed between the numbers
 * @n: Number of strings
 * @...: Unnamed arguments
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	uint i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		char *s = va_arg(list, char*);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
