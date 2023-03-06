/**
 * *_memset - function that fills memory with a constant byte.
 * @s: pointer to a memory area
 * @b: constant byte
 * @n: bytes to fill
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
