#include "main.h"
#include <stdlib.h>

int word_len(char *s);
int count_words(char *s);
char **strtow(char *str);

/**
 * word_len - Gets the index of the last character of a word
 * @s: string to check
 *
 * Return: Index at the end of the word
 */
int word_len(char *s)
{
	int idx = 0, len = 0;

	while (*(s + idx) && *(s + idx) != ' ')
	{
		len++;
		idx++;
	}

	return (len);
}

/**
 * count_words - count the number of words in a string
 * @s: The string
 *
 * Return: the number of words in string
 */
int count_words(char *s)
{
	int idx, words = 0, len = 0;

	for (idx = 0; *(s + idx); idx++)
		len++;

	for (idx = 0; idx < len; idx++)
	{
		if (*(s + idx) != ' ')
		{
			words += 1;
			idx = word_len(s + idx);
		}
	}

	return (words);
}

/**
 * strtow - a function that splits a string into words.
 * @str: the string
 * Return: a pointer to an array of strings or NULL
 */
char **strtow(char *str)
{
	int idx = 0, letters, words, l, w;
	char **strings;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[idx] == ' ')
			idx++;

		letters = word_len(str + idx);
		strings[w] = malloc(sizeof(char) * (letters + 1));
		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			strings[w][l] = str[idx++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}
