#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: array
 * @n: length of the array
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n; i++)
	{
		if (n % 2 == 1)
		{
			if (i == n - i - 1)
				break;
			tmp = a[i];
			a[i] = a[n - i - 1];
			a[n - i - 1] = tmp;
		}
		else
		{
			if (i > n - i - 1)
				break;
			tmp = a[i];
			a[i] = a[n - i - 1];
			a[n - i - 1] = tmp;
		}
	}
}
