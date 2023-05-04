#include "variadic_functions.h"

void _print_args(const char * const fmt, va_list arg_list);
void _print_str(char *s);

/**
 * print_all -  Finction that prints anything
 * @format:  a list of types of arguments passed to the function
 *
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	va_list list;

	if (!format)
		return;

	va_start(list, format);

	_print_args(format, list);

	va_end(list);
}

/**
 * _print_args - Prints arguments provided in list
 * @fmt: A list of types of arguments
 * @arg_list: Arguments list
 *
 * Return: Nothing
 */
void _print_args(const char * const fmt, va_list arg_list)
{
	int j = 0;

	while (fmt && fmt[j])
	{
		int ignore = 0;

		switch (fmt[j])
		{
			case 'c':
				printf("%c", va_arg(arg_list, int));
				break;
			case 'i':
				printf("%d", va_arg(arg_list, int));
				break;
			case 'f':
				printf("%f", va_arg(arg_list, double));
				break;
			case 's':
				_print_str(va_arg(arg_list, char *));
				break;
			default:
				ignore = 1;
		}
		if (fmt[j + 1] && !ignore)
			printf(", ");
		j++;
	}
	printf("\n");
}

/**
 * _print_str - Print strings
 * @s: string
 *
 * Return: Nothing
*/
void _print_str(char *s)
{
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
