#include "main.h"
#include <stdlib.h>
#include "_memcpy.c"

/**
 * _strlen - helper function to retuirn length of a string.
 * @s: string
 * Return: length of string (int)
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * str_concat - a function that concatenates two strings.
 * @s1: string
 * @s2: string
 * Return: Pointer to memory.
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int s1_len = 0;
	int s2_len = 0;

	/* check if s1 and s2 are NULL */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* get length of s1 and s2 */
	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	/* allocate memory */
	c = malloc(sizeof(char) * (s1_len + s2_len + 1));

	/* check for dup = NULL */
	if (c == NULL)
		return (NULL);

	/* copy s1 to c */
	_memcpy(c, s1, s1_len);

	/* copy s2 to c (+ s1_len) */
	_memcpy(c + s1_len, s2, s2_len + 1);

	return (c);
}
