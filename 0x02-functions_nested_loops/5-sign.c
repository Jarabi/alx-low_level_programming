
#include <ctype.h>

/**
 * _isalpha - Function to check for alphabetic character
 * @c: The character to check
 *
 * Return: If c is a letter, lowercase or uppercase, 1.
 * Otherwise, 0.
 */
int _isalpha(int c)
{
	int ret = isalpha(c) == 0 ? 0 : 1;

	return (ret);
}
