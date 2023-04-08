#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number, or 0 if:
 * - string contains characters other than 0 or 1
 * - b is null
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint_val = 0, i = 0;

	if (b == NULL)
		return (0);

	for (; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		/* left shift by 1 at every iteration*/
		uint_val <<= 1;

		/* if '1', bitwise OR with 1 */
		if (b[i] == '1')
			uint_val |= 1;
	}
	return (uint_val);
}
