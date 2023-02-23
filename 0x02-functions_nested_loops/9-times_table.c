#include "main.h"

/**
 * times_table - Prints the 9 times table starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int val = i * j;

			/* Handle digits in val */
			if (val > 9)
			{
				_putchar('0' + val / 10);
				_putchar('0' + val % 10);
			} else
			{
				if (j != 0)
					_putchar(' ');

				_putchar('0' + val);
			}

			/* Handle val trail */
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			} else {
				_putchar('\n');
			}
		}
	}
}
