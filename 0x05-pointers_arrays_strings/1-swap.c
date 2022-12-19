/**
 * swap_int - swap the values of two memory locations
 * @a: first integer pointer
 * @b: second integer pointer
 *
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
