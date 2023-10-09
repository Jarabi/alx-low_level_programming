#include "main.h"
#include <stdio.h>

/**
 * print_buffer - a function that prints a buffer.
 * @b: pointer to a buffer
 * @size: size of the buffer
 */
void print_buffer(char *b, int size)
{
	int idx, byte = 0;

	for (; byte < size; byte += 10)
	{
		printf("%08x: ", byte);

		for (idx = 0; idx < 10; idx++)
		{
			if ((byte + idx) >= size)
				printf(" ");
			else
				printf("%02x", *(b + idx + byte));

			if ((idx % 2) != 0 && idx != 0)
				printf(" ");
		}

		for (idx = 0; idx < 10; idx++)
		{
			if ((idx + byte) >= size)
				break;
			else if (*(b + idx + byte) >= 31 &&
				 *(b + idx + byte) <= 126)
				printf("%c", *(b + idx + byte));
			else
				printf(".");
		}

		if (byte >= size)
			continue;
		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
