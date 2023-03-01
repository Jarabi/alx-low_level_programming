/**
 * *_strcat - function that concatenates two strings.
 * @dest: destination string pointer
 * @src: source string pointer
 *
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int i, dest_len = 0;

	/* Get the length of dest */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Copy src to dest */
	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	/* Append null character to end of dest */
	dest[dest_len + i] = '\0';

	return (dest);
}
