/**
 * _isalpha - Function to check for alphabetic character
 * @c: The character to check
 *
 * Return: If c is a letter, lowercase or uppercase, 1.
 * Otherwise, 0.
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
