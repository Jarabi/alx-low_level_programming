#include "main.h"
#include <stdio.h>
/**
 * main - a program that prints the number of args passeed into it.
 * @argc: holds the number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
