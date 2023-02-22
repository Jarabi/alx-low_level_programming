#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The number to check
 *
 * Return: Absolute value of n
 */
int _abs(int n)
{
	int absVal = n < 0 ? n * -1 : n;

	return (absVal);
}
