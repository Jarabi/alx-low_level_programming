#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of integers
 * @...: Unnamed arguments
 *
 * Return: On success sum of parameters. On error, 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	uint i, sum = 0;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum +=  va_arg(list, uint);
	va_end(list);

	return (sum);
}
