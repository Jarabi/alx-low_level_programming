/**
 * check_prime - helper function
 * @n: number teck for prime
 * @check: possible divisor
 *
 * Return: int
 */
int check_prime(int n, int check)
{
	if (n > check)
	{
		if (n % check == 0)
			return (0);
		return (check_prime(n, check + 1));
	}

	return (1);
}

/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: number to check
 *
 * Return: int.
 */
int is_prime_number(int n)
{
	/* Check if n <= 1 */
	if (n <= 1)
		return (0);

	return (check_prime(n, 2));
}
