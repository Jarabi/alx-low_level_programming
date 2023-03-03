/**
 * *rot13 - function that encodes a string using rot13.
 * @s: string to be encoded
 *
 * Return: str
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 97 && s[i] <= 122) || (s[i] >= 65 && s[i] <= 90))
		{
			if (s[i] > 109 || (s[i] > 77 && s[i] < 91))
				s[i] -= 13;
			else
				s[i] += 13;
		}
	}
	return (s);
}
