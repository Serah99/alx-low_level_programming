#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: The string.
 */
void puts_half(char *str)
{
	int len = 0, n;

	while (str[len])
		len++;

	n = (len % 2) ? (len + 1) / 2 : len / 2;

	for (; str[n]; n++)
		_putchar(str[n]);

	_putchar('\n');
}
