#include "main.h"
#include <stdlib.h>

/**
 * _strlen - helper function
 * @s: string
 *
 * Return: length of string (int)
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * *string_nconcat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: first bytes of s2
 *
 * Return: Pointer to allocated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, k;
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;

	/* check s1 and  s2 */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* get string length */
	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	if (n >= s2_len)
		n = s2_len;

	p = malloc(sizeof(*p) * (s1_len + n + 1));

	if (p == NULL)
		return (NULL);

	/* copy s1 to p */
	for (i = 0; s1[i]; i++)
		p[i] = s1[i];

	/* copy s2 to p */
	for (j = s1_len, k = 0; j < (s1_len + n) && s2[k] != '\0'; j++, k++)
		p[j] = s2[k];

	p[s1_len + n] = '\0';

	return (p);
}
