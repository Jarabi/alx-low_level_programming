#include <stdio.h>
#include <stdlib.h>
#include "_atoi.c"
#include "_isdigit.c"

/**
 * check_args - helper: check args count
 * @a: argument count
 *
 * Return: Nothing.
 */
void check_args(int a)
{
	if (a != 3)
	{
		printf("Error\n");
		exit(98);
	}
}

/**
 * check_digits - helper: check for digits
 * @n: number (string)
 *
 * Return: Nothing.
 */
void check_digits(char *n)
{
	while (*n)
	{
		if (!_isdigit(*n))
		{
			printf("Error\n");
			exit(98);
		}
		n++;
	}
}

/**
 * multiply - helper: multiplies two numbers.
 * @n1: first number
 * @n2: second number
 *
 * Return: int.
 */
int multiply(int n1, int n2)
{
	return (n1 * n2);
}

/**
 * main - a program that multiplies two positive numbers.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: pointer to allocated space.
 */
int main(int argc, char *argv[])
{
	int num1, num2, product;

	/* check number of arguments */
	check_args(argc);

	/* check for digits */
	check_digits(argv[1]);
	check_digits(argv[2]);

	/* convert to integers */
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	/* get product of numbers */
	product = multiply(num1, num2);

	printf("%d\n", product);
	return (0);
}

