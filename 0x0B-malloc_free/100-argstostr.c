#include "main.h"
#include "_strlen.c"
#include "_strcpy.c"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: pointer to argument vector
 *
 * Return: String.
 */
char *argstostr(int ac, char **av)
{
	int i, chars_len = 0, idx = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* get total length of all args */
	/* including the \n character */
	for (i = 0; i < ac; i++)
		chars_len += _strlen(av[i]) + 1;

	s = (char *) malloc(chars_len * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		_strcpy(s + idx, av[i]);
		idx += _strlen(av[i]);
		s[idx++] = '\n';
	}

	return (s);
}
