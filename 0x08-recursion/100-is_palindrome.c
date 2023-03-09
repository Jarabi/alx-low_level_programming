/**
 * get_length - helper function to get length of string
 * @s: string
 *
 * Return: int
 */
int get_length(char *s)
{
	int len;

	len = (*s == '\0') ? 0 : (1 + get_length(s + 1));
	return (len);
}

/**
 * check_palindrome - check if string is palindrome
 * @s: string
 * @len: string length
 * @idx: start index
 *
 * Return: int
 */

int check_palindrome(char *s, int len, int idx)
{
	if (len > idx)
		return ((s[idx] == s[len]) ? check_palindrome(s, len - 1, idx + 1) : 0);
	return (1);
}

/**
 * is_palindrome - function that returns 1 if string is a
 * palindrome, otherwise return 0.
 * @s: string to check
 *
 * Return: int.
 */
int is_palindrome(char *s)
{
	int str_len, result;

	/* Check if s is empty */
	if (*s == '\0')
		return (1);

	str_len = get_length(s);
	result = check_palindrome(s, str_len - 1, 0);
	return (result);
}
