#include <stdio.h>

/**
 * main - Starting point
 *
 * Return: 0
 */
int main(void)
{
	long int i = 1, j = 2, sum;
	int k;

	printf("1, 2");

	for (k = 3; k <= 50; k++)
	{
		sum = i + j;
		i = j;
		j = sum;

		printf(", %lu", sum);
	}

	putchar('\n');

	return (0);
}
