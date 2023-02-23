/**
 * _isdigit - check for a digit (0 through 9)
 * @c: argument to check
 *
 * Return: 1 if c is a digit
 * 0 otherwise
 */
int _isdigit(int c)
{
	int check = (c >= '0' && c <= '9')  ? 1 : 0;

	return (check);
}
