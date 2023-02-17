#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	char l;

	for (d = 0; d < 10; d++)
		putchar((d % 10) + '0');

	for (l = 'a'; l <= 'f'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}
