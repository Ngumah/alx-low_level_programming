#include "main.h"

/**
 * print_rev - print the reverse string on standard output
 * @str: string to be printed
 *
 */
void print_rev(char *str)
{
	int n = 0;

	while (*(str++))
		n++;
	str--;

	for (; n > -1; n--)
		_putchar(*(str--));
	_putchar('\n');
}
