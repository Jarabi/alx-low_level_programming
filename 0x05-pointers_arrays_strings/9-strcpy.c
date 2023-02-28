/**
 * *_strcpy - Function that copies the string pointed to by src,
 * including the null byte (\0), to the buffer pointer by dest.
 * @dest: destination pointer
 * @src: source pointer
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Copy individual characters from src to dest */
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}

	/* Append null byte to end of dest */
	*(dest + i) = '\0';

	return (dest);
}
