#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: holds the number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int m, n;

	if (argc == 3)
	{
		m = atoi(argv[1]);
		n = atoi(argv[2]);
		printf("%d\n", m * n);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
