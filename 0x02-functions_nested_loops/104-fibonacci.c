#include <stdio.h>

/**
 * numLen - Returns the number of digits in a number
 * @n: the number
 *
 * Return: number of digits
 */
int numLen(int n)
{
	int len = 0;

	if (!n)
		return (1);

	while (n)
	{
		n /= 10;
		len += 1;
	}

	return (len);
}

/**
 * main - Prints the first 98 Fibonacci numbers followed by a new line.
 * Return: 0
 */
int main(void)
{
	unsigned long f1, f2, tmp, max, m, n, t;
	short int i, init;

	f1 = 1;
	f2 = 2;
	max = 100000000;
	m = 0;
	n = 0;
	t = 0;
	i = 1;

	for (; i <= 98; i++)
	{
		if (m > 0)
			printf("%lu", m);

		init = numLen(max) - 1 - numLen(f1);

		while (m > 0 && init > 0)
		{
			printf("%i", 0);
			init--;
		}
		printf("%lu", f1);

		tmp = (f1 + f2) % max;
		t = m + n + (f1 + f2) / max;
		f1 = f2;
		m = n;
		f2 = tmp;
		n = t;

		if (i != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
