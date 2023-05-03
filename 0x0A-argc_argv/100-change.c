#include "main.h"

/**
 * main - Prints the minimum number of coins to make change for an
 * amount of money.
 * @ac: Number of arguments passed
 * @av: the arguments
 *
 * Return: 0 if success, 1 if incorrect number of arguments passed.
 */
int main(int ac, char **av)
{
	int coins = 0, cents = 0;

	/* Check numer of arguments passed */
	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(av[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents -= 1;
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
