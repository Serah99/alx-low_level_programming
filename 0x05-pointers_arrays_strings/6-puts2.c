#include "main.h"

/**
 * puts2 - Prints alternate chars of a string.
 * @str: Input string.
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i]; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
