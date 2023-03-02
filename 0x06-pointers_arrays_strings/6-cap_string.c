/**
 * *cap_string - function that capitalizes first letters of words in string.
 * @s: string to convert
 *
 * Return: str
 */
char *cap_string(char *s)
{
	int i;
	int str_len = 0;
	int check = 0;

	/* get length of s */
	while (s[str_len] != '\0')
		str_len++;

	/* iterate through s */
	for (i = 0; i < str_len; i++)
	{
		if (s[i] == ',' || s[i] == ';' || s[i] == '.' ||
				s[i] == '!' || s[i] == ' ' || s[i] == '?' ||
				s[i] == '"' || s[i] == '(' || s[i] == ')' ||
				s[i] == '{' || s[i] == '}' || s[i] == ':' ||
				s[i] == '\n' || s[i] == '\t')
			check = 0;
		else
		{
			if ((s[i] >= 'a' && s[i] <= 'z') && check == 0)
			{
				s[i] -= 32;
				check++;
			}
			else
			{
				check++;
			}
		}
	}
	return (s);
}
