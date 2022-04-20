/**
 * swap_int - swapping function of the address
 * @a: int of a pointer to a
 * @b: int of a ponter to b
 */


void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
