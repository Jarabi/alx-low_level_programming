#include <stdio.h>

/**
 * get_endianness - checks the system endianness (byte order)
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num;
	char *num_ptr;
	/* int endianness; */

	num = 1;

	/* Get the address of where the number is stored */
	num_ptr = (char *) &num;

	printf("0x%x\n", *num_ptr);
	/* endianness = *num_ptr == 50 ? 1 : 0; */
	return ((int) *num_ptr);
}
