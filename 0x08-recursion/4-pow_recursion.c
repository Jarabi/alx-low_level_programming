#include "main.h"
/**
 * _pow_recursion - A function that returns the value of
 * x raised to the power of y.
 * @x: base value
 * @y: power
 *
 * Return: int.
 */
int _pow_recursion(int x, int y)
{
	/* Check if y is < 0 */
	if (y < 0)
		return (-1);

	/* Check if y == 0 */
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
