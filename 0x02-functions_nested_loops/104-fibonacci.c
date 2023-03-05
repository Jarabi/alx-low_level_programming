#include <stdio.h>

/**
 * main - Starting point
 *
 * Return: 0
 */
int main(void)
{
	long int i, j, sum;
	int k;

	i = 1;
	j = 2;
	sum = 0;

	printf("1, 2");

	for (k = 0; k < 95; k++)
	{
		sum = i + j;
		i = j;
		j = sum;

		printf(", %lu", sum);
	}

	putchar('\n');

	return (0);
}
