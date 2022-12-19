#include "main.h"

/**
 * print_rev - print the reverse string on standard output
 * @str: string to be printed
 *
 */
void print_rev(char *str)
{
	int n = 0;
	int i = 0;

	while (str[n])
		n++;
	for (; i < n; i++)
		_putchar(str[n - i - 1]);
	_putchar('\n');
}
