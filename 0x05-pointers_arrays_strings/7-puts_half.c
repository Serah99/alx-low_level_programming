#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: The string to be processed.
 *
 * Description: If the string length is odd, it prints the second half starting
 * from (length - 1) / 2. Otherwise, it starts from length / 2. The output is 
 * followed by a newline.
 */
void puts_half(char *str)
{
	int index, len_half, len_full;

	len_full = 0;

	// Calculate the string length
	for (index = 0; str[index] != '\0'; index++)
		len_full++;

	// Determine starting point for printing
	if (len_full % 2 == 0)
		len_half = len_full / 2;
	else
		len_half = (len_full + 1) / 2;

	// Print the second half of the string
	for (index = len_half; str[index] != '\0'; index++)
		_putchar(str[index]);

	_putchar('\n');
}
