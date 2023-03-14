#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: pointer to argument vector
 *
 * Return: String.
 */
char *argstostr(int ac, char **av)
{
	int i;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	s = (char *) malloc(ac * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < (ac - 1); i++)
		s[i] = *av[i + 1];

	return (s);
}
