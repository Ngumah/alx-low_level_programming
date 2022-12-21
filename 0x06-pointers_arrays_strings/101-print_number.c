#include "main.h"

/**
 * print_number - print an integer to std output
 * @n: integer
 *
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 == 0)
	{
		_putchar('0' + n % 10);
		return;
	}
	print_number(n / 10);
	_putchar('0' + n % 10);
}
