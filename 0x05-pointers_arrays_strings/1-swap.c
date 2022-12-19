/**
 * swap - swap the values of two memory locations
 * @a: first integer pointer
 * @b: second integer pointer
 *
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
