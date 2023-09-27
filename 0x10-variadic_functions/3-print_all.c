#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_everything - prints anything
 * @pattern: list of types of arguments passed to the function
 */
void print_everything(const char * const pattern, ...)
{
	int idx = 0;
	char *content, *delimiter = "";

	va_list args;

	va_start(args, pattern);

	if (pattern)
	{
		while (pattern[idx])
		{
			switch (pattern[idx])
			{
				case 'c':
					printf("%s%c", delimiter, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", delimiter, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", delimiter, va_arg(args, double));
					break;
				case 's':
					content = va_arg(args, char *);
					if (!content)
						content = "(nil)";
					printf("%s%s", delimiter, content);
					break;
				default:
					idx++;
					continue;
			}
			delimiter = ", ";
			idx++;
		}
	}

	printf("\n");
	va_end(args);
}
