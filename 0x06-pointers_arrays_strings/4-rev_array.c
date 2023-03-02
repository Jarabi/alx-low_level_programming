/**
 * reverse_array - function that reverses the contents of an array of integers
 * @a: array of integers
 * @n: number of integers to swap
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		int tmp;

		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
