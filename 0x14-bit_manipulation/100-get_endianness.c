#include <stdio.h>

/**
 * get_endianness - checks the system endianness (byte order)
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *num_ptr;
	int endian;

	/* Get the address of where the number is stored */
	num_ptr = (char *) (&num);

	/* Testing */
	/* printf("0x%x\n", *num_ptr); */

	endian = *num_ptr == 1 ? 1 : 0;
	return (endian);
}
