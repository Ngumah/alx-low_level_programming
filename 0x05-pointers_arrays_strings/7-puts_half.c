#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 *
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i++]) 
		;

	if ((i / 2) % 2 == 1)
		i = i / 2;
	else
		i /= 2;

	for (; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
