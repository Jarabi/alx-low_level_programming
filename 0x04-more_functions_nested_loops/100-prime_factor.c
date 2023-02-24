#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long int num, divisor, max_prime;

	num = 612852475143;
	divisor = 2;

	while (num != 0)
	{
		if (num % divisor != 0)
		{
			divisor += 1;
		}
		else
		{
			num /= divisor;
			max_prime = num;
		}

		if (num == divisor)
		{
			printf("%lu is the largest prime factor!\n", max_prime);
			break;
		}
	}
	return (0);
}
