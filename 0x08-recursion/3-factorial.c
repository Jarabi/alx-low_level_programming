#include "main.h"
/**
 * factorial - function that returns the factorial of a given number.
 * @n: number supplied
 *
 * Return: unsigned long int.
 */
int factorial(int n)
{
	/* Check if number is < 0 */
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
