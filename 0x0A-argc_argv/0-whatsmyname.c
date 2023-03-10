#include "main.h"
#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line.
 * @argc: holds the number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s", argv[0]);
	putchar('\n');

	return (0);
}
