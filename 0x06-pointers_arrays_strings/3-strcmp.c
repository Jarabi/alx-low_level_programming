#include "main.h"

/**
 * *_strcmp - function that compares two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int s1_len, s2_len, result;

	s1_len = check_str_len(s1);
	s2_len = check_str_len(s2);

	if (s1_len > s2_len)
		result = 15;
	else if (s1_len < s2_len)
		result = -15;
	else
		result = 0;

	return (result);
}

/**
 * check_str_len - function that return length of string.
 * @s: string pointer
 *
 * Return: int
 */
int check_str_len(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
