#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_values - Prints numbers, followed by a new line.
 * @delimiter: The string to be printed between numbers.
 * @count: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_values(const char *delimiter, const unsigned int count, ...)
{
	va_list values;
	unsigned int idx;

	va_start(values, count);

	for (idx = 0; idx < count; idx++)
	{
		printf("%d", va_arg(values, int));

		if (idx != (count - 1) && delimiter != NULL)
			printf("%s", delimiter);
	}

	printf("\n");

	va_end(values);
}
