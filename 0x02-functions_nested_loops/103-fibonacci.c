#include <stdio.h>

/**
 * main - Starting point
 *
 * Return: 0
 */
int main(void)
{
	long int i = 1, j = 2, sum, total;
	int k;

	printf("1, 2");

	for (k = 3; k <= 4000000; k++)
	{
		sum = i + j;
		i = j;
		j = sum;

		if (sum % 2 == 0)
			total += sum;
	}

	printf("%lu\n", total);

	return (0);
}
