/**
 * *leet - function that encodes a string into 1337.
 * @s: string to convert
 *
 * Return: str
 */
char *leet(char *s)
{
	int i, j;
	char alpha[] = {'a', 'e', 'o', 't', 'l'};
	int leet[] = {52, 51, 48, 55, 49};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == alpha[j] || s[i] == (alpha[j] - 32))
				s[i] = leet[j];
		}
	}
	return (s);
}
