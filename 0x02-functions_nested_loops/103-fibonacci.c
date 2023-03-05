#include <stdio.h>

/**
 * main - Starting point
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int i, j, k, sum, total;

	i = 0;
	j = 1;
	sum = 0;
	total = 0;

	for (k = 0; sum <= 4000000; k++)
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
