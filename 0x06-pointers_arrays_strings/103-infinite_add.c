#include "main.h"

/**
 * num_len - returns the length of a string of numbers
 * @n: string of numbers
 * Return: Length of string of numbers
 */
int num_len(char *n)
{
	int length = 0;

	while (*n)
	{
		length += 1;
		n++;
	}

	return (length);
}

/**
 * add_num_strings - add up numbers stored in strings
 * @a: first string of numbers
 * @b: second string of numbers
 * @buf: buffer to store result
 * @buf_idx: index of the buffer
 *
 * Return: The sum of the strings or 0
 */
char *add_num_strings(char *a, char *b, char *buf, int buf_idx)
{
	int num, tens = 0;

	for (; *a && *b; a--, b--, buf_idx--)
	{
		num = (*a - '0') + (*b - '0');
		num += tens;
		*(buf + buf_idx) = (num % 10) + '0';
		tens = num / 10;
	}

	while (*a)
	{
		num = (*a - '0') + tens;
		*(buf + buf_idx) = (num % 10) + '0';
		tens = num / 10;

		a--;
		buf_idx--;
	}

	while (*b)
	{
		num = (*b - '0') + tens;
		*(buf + buf_idx) = (num % 10) + '0';
		tens = num / 10;

		b--, buf_idx--;
	}

	if (tens && buf_idx >= 0)
	{
		*(buf + buf_idx) = (tens % 10) + '0';
		return (buf + buf_idx);
	}

	else if (tens && buf_idx < 0)
		return (0);

	return (buf + buf_idx + 1);
}

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: is the buffer that the function will use to store the result
 * @size_r: is the buffer size
 *
 * Return: a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1_len, n2_len;
	char *res;

	/* Get lengths of the numbers */
	n1_len = num_len(n1);
	n2_len = num_len(n2);

	/* Ensure buffer size is sufficient */
	if (n1_len + 1 >= size_r || n2_len + 1 >= size_r)
		return (0);

	n1 += n1_len - 1;
	n2 += n2_len - 1;
	*(r + size_r) = '\0';

	res = add_num_strings(n1, n2, r, --size_r);

	return (res);
}
