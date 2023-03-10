#include "main.h"
#include <stdio.h>
/**
 * main - a program that prints all arguments it receives
 * @argc: holds the number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
