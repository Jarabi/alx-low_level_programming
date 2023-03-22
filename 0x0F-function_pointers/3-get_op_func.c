#include "3-calc.h"
#include <stddef.h>
#include <string.h>

/**
 * get_op_func - a function that selects the correct function to
 * perform the operation asked by the user.
 * @s: operator string
 *
 * Return: pointer to function or NULL
 */
int (*get_op_func(char *s))(int a, int b)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
