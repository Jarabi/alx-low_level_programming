/**
 * _isupper - check for uppercase characters
 * @c: argument to check
 *
 * Return: int
 */
int _isupper(int c)
{
	int check = (c >= 'A' && c <= 'Z')  ? 1 : 0;

	return (check);
}
