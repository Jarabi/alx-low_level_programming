#include "main.h"
#include <stdlib.h>

/**
 * _memcpy - helper function: implementation of memcpy
 * @dest: destination of copy
 * @src: source of copy
 * @len: bytes to copy
 *
 * Return: Nothing.
 */
void *_memcpy(void *dest, const void *src, int len)
{
	char *d = dest;
	const char *s = src;
	int i;

	for (i = 0; i < len; i++)
		d[i] = s[i];
	return dest;
}

/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a param
 * @str: the string to copy
 *
 * Return: Pointer to memory.
 */
char *_strdup(char *str)
{
	char *dup;
	int len = 0;

	/* check if str is NULL */
	if (str == NULL)
		return (NULL);

	/* get length of str */
	while (str[len])
		len++;

	/* allocate memory */
	dup = (char *) malloc(sizeof(char) * len + 1);

	/* check for dup = NULL */
	if (dup == NULL)
		return (NULL);

	_memcpy(dup, str, len + 1);
	return (dup);
}
