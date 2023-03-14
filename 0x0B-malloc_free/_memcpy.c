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
	return (dest);
}
