#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer (00:00 to 23:59)
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i, j, m, n;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (m = 0; m <= 5; m++)
			{
				for (n = 0; n < 10; n++)
				{
					if (i == 2 && j == 3 && m == 5 && n == 9)
					{
						_putchar('0' + i);
						_putchar('0' + j);
						_putchar(':');
						_putchar('0' + m);
						_putchar('0' + n);
						_putchar('\n');

						return;
					}

					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + m);
					_putchar('0' + n);
					_putchar('\n');
				}
			}
		}
	}
}
