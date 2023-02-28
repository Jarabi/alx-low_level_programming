/**
 * rev_string - Reverses a string
 * @s: string to reverse
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i, len = 0;
	char tmp;

	/* Get the length of the string*/
	do {
		len++;
	} while (s[len] != '\0');

	/* Reverse the string */
	for (i = 0; i < len; i++)
	{
		len -= 1;
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
	}
}
