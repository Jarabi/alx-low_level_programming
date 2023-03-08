#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string to check
 *
 * Return: void.
 */
int _strlen_recursion(char *s)
{
	/* Check if string is empty */
	return (*s == '\0') ? (0) : (1 + _strlen_recursion(s + 1));
}
