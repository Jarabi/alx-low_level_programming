#include <stdio.h>
/**
 * _strlen - Returns the length of a string
 * @s: pointer to string
 *
 * Return: Nothing
 */
int _strlen(int *s)
{
	int len = 0;

	do {
		len++;
	} while (s[len]);

	return (len);
}
