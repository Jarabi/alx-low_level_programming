#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer, from 00:00 to 23:59
 *
 * Return: void 
 */
void jack_bauer(void)
{
	/*int absVal = n >= 0 ? n : n * -1;*/
	int last = n % 10;

	last = last >= 0 ? last : last * -1;
	_putchar(last + '0');

	return (last);
}
