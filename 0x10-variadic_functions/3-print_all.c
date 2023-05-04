#include "variadic_functions.h"

void _print_args(const char * const fmt, va_list arg_list, int len);

/**
 * print_all -  Finction that prints anything
 * @format:  a list of types of arguments passed to the function
 *
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	int len = 0;
	va_list list;

	va_start(list, format);

	while (format[len] != '\0')
		len++;

	_print_args(format, list, len);

	va_end(list);
}

/**
 * _print_args - Prints arguments provided in list
 * @fmt: A list of types of arguments
 * @arg_list: Arguments list
 * @len: Number of argument types
 *
 * Return: Nothing
 */
void _print_args(const char * const fmt, va_list arg_list, int len)
{
	int j = 0;
	char *s;

	while (j < len)
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
				s = va_arg(arg_list, char *);

				if (s)
					printf("%s", s);
				else
					printf("(nil)");
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
