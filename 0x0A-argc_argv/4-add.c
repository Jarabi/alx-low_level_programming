#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0; /* an integer to help us iterate in our loop from 0 to len*/
	d = 0; /* checks signage */
	n = 0; /* keeps tracks of the powers of 10, 10th, 100th, 1000th */
	len = 0; /* length of our string */
	f = 0;
	digit = 0;

	while (s[len] != '\0') /* while loop to determine length of our string */
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);
	return (n);
}

/**
 * main - a program that adds positive numbers
 * @argc: holds the number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		putchar('0');
		putchar('\n');
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *num = argv[i];

		for (j = 0; num[j] != '\0'; j++)
		{
			if (!(num[j] >= '0' && num[j] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += _atoi(num);

	}
	printf("%d\n", sum);
	return (0);
}
