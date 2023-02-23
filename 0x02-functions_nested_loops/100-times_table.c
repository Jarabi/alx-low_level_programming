#include "main.h"

/**
 * print_times_table - Checks starting number (n)
 *@n: Starting point
 *
 * Return: void
 */
void print_times_table(int n)
{
	/* Check n: not < 0 or > 15 */
	if (n < 0 || n > 15)
		return;

	print_table(n);
}

/**
 * print_table - Prints the n times table starting with 0
 *@n: Starting point
 *
 * Return: void
 */
void print_table(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int val = i * j;

			/* Handle digits in val */
			if (val > 99)
			{
				_putchar('0' + (val / 100));
				_putchar('0' + ((val / 10) % 10));
				_putchar('0' + (val % 10));
			}
			else if (val > 9)
			{
				_putchar(' ');
				_putchar('0' + val / 10);
				_putchar('0' + val % 10);
			} else
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}

				_putchar('0' + val);
			}

			/* Handle val trail */
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			} else
				_putchar('\n');
		}
	}
}
