#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Starting point
 *
 * Return: Always 0
 */
int main(void)
{
	char pwd[84];
	int idx = 0, sum = 0, diff1, diff2;

	srand(time(0));
	while (sum < 27772)
	{
		pwd[idx] = 33 + rand() % 94;
		sum += pwd[idx++];
	}

	pwd[idx] = '\0';

	if (sum != 27772)
	{
		diff1 = (sum - 27772) / 2;
		diff2 = (sum - 27772) / 2;

		if ((sum - 27772) % 2 != 0)
			diff1++;

		for (idx = 0; pwd[idx]; idx++)
		{
			if (pwd[idx] >= (33 + diff1))
			{
				pwd[idx] -= diff1;
				break;
			}
		}

		for (idx = 0; pwd[idx]; idx++)
		{
			if (pwd[idx] >= (33 + diff2))
			{
				pwd[idx] -= diff2;
				break;
			}
		}
	}

	printf("%s", pwd);
	return (0);
}
