/**
 * *_strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, start, nlen;

	start = 0;
	nlen = 0;

	while (needle[nlen] != '\0')
		nlen++;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; j < nlen && haystack[i] == needle[j]; j++, i++)
		{
			if (j == 0)
				start = i;
			if (j == nlen - 1)
				return (haystack + start);
		}
	}
	return (0);
}
