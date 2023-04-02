#include <stdio.h>

/**
 * main - Starting point
 *
 * Return: 0
 */
int main(void)
{
	int f1 = 1;
	int f2 = 2;
	int f;
	int i;

	printf("%d, %d ", f1, f2);

	for (i = 3; i < 98; i++)
	{
		f = f1 + f2;
		printf("%d", f);

		if (i < 98)
			printf(", ");
		f1 = f2;
		f2 = f;
	}

	putchar('\n');

	return (0);
}
