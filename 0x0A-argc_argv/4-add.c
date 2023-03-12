#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0;

	if (*s == '\0')
		return (0);

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] <= '0' || s[i] >= '9')
			return (0);

		result = result * 10 + s[i] - '0';
		i++;
	}

	return (sign * result);
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
