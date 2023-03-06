/**
 * *_memcpy - function that copies memoy area.
 * @dest: copy destination
 * @src: copy source
 * @n: bytes to copy
 *
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
