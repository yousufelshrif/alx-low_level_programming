/**
 * swap_int - function that swaps the values of two integers
 * @a: number to be swaped
 * @b: number to be swaped
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
