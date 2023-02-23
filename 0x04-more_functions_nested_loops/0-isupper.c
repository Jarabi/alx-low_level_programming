/**
 * _isupper - check for uppercase characters
 * @c: argument to check
 *
 * Return: 1 if c is uppercase
 * 0 otherwise.
 */
int _isupper(int c)
{
	int check = (c >= 'A' && c <= 'Z')  ? 1 : 0;

	return (check);
}
