#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, l;
	char msg[30];
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
	{
		strcpy(msg, "and is greater than 5");
	} else if (l == 0)
	{
		strcpy(msg, "and is 0");
	} else
	{
		strcpy(msg, "and is less than 6 and not 0");
	}
	
	printf("Last digit of %d is %d %s\n", n, l, msg);
	
	return (0);
}
