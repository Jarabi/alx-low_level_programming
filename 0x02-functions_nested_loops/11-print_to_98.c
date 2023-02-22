#include <stdio.h>

/**
 * print_to_98 - Function to print all natural numbers (n to 98)
 * @n: First number
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		do {
			printf("%d", n);

			if (n != 98)
				printf(", ");

			n += 1;
		} while (n <= 98);
	} else
	{
		do {
			printf("%d", n);

			if (n != 98)
				printf(", ");

			n -= 1;
		} while (n >= 98);
	}
	putchar('\n');
}
