#include "main.h"

/**
 * _puts - prints a string to standard out
 * @str: string to be printed
 *
 */
void _puts(char *str)
{
	int i = 0;

	for (; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
