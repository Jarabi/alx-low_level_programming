#include <stdio.h>
/**
 * _atoi - Function that converts a string to an integer.
 * @s: string pointer
 *
 * Return: char
 */
int _atoi(char *s)
{
	int iter = 0, number = 0, sign = 1;

	while (s[iter] != '\0')
	{
		/* Check effective sign */
		if (s[iter] == '-')
			sign = -sign;

		/* Check for numbers */
		if (s[iter] >= '0' && s[iter] <= '9')
			number = number * 10 + s[iter] - '0';

		iter++;
	}
	return (sign * number);
}
