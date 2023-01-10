#include "main.h"

/**
 * _isupper - check upper cases
 *  @c: value to check
 * Return: 1 if successful else 0
 */
int _isupper(int c)
{
	char k;
	int re;

	for (k = 'A'; k <= 'Z'; k++)
	{
		if (c != k)
		{
			re = 0;
		}
		else
		{
			re = 1;
			break;
		}
	}
	return (re);
}
