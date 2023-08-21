#include "main.h"

/**
 * puts2 - Prints one character out of two, starting with the first one.
 * @str: The string to be processed.
 *
 * Description: Given a string, this function prints every other character,
 * starting from the first character. The output is followed by a newline.
 */
void puts2(char *str)
{
	int length = 0;
	int i;

	// Calculate the string length
	while (str[length] != '\0')
	{
		length++;
	}

	// Print every other character
	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
