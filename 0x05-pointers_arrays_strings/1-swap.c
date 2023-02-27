/**
 * swap_int - swaps the value of two integers
 * @a: first parameter
 * @b: second parameter
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
