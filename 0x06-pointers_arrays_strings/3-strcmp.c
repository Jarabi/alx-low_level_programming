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
	int i; /* iterator */
	int s1_len; /* length of s1 */
	int s2_len; /* length of s2 */
	int s_diff; /* string with greater length (s1 or s2) */
	int int_diff = 0; /* integer difference between s1 and s2 */

	s1_len = check_str_len(s1);
	s2_len = check_str_len(s2);

	/* length of longer string */
	s_diff = s1_len >= s2_len ? s1_len : s2_len;

	for (i = 0; i < s_diff; i++)
	{
		if (int_diff == 0)
			int_diff += (s1[i] - s2[i]);
		else
			break;
	}
	return (int_diff);
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
