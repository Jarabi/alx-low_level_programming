#include <ctype.h>

/**
 * _islower - Function to check for lowercase character
 * @c: The character to check
 *
 * Return: If lowercae, 1.
 * Otherwise, 0.
 */
int _islower(int c)
{
	int ret = islower(c) == 0 ? 0 : 1;
	return (ret);
}
