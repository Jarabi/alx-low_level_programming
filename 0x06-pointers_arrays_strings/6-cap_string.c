/**
 * *cap_string - function that capitalizes first letters of words in string.
 * @s: string to convert
 *
 * Return: str
 */
char *cap_string(char *s)
{
	int i, j;
	int arrlen = 12;
	int separators[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 58, 59, 63, 123, 125};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < arrlen; j++)
		{
			if (s[i - 1] == separators[j])
			{
				if (s[i] >= 'a' && s[i] <= 'z')
					s[i] -= 32;
			}
		}
	}
	return (s);
}
