#include "main.h"

/**
 * calculate_sqrt - helper function
 * @n: number for which to find natural sqrt
 * @num: possible sqrt of n
 *
 * Return: int
 */
int calculate_sqrt(int n, int num)
{
	if (num * num > n)
		return (-1);
	if (num * num == n)
		return (num);

	return (calculate_sqrt(n, num + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: number
 *
 * Return: int.
 */
int _sqrt_recursion(int n)
{
	/* Check if n is < 0 */
	if (n < 0)
		return (-1);

	/* Check if n <= 0 */
	if (n <= 1)
		return (1);

	return (calculate_sqrt(n, 0));
}
