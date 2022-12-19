#include "main.h"

/**
 * print_array - print the elements of an array
 * @a: array
 * @n: length of array
 *
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", *(a + i));
		}
		else
		{
			printf("%d\n", *(a + i));
		}
	}
}
