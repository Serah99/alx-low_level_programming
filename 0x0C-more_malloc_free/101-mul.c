#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int idx = 0;
	char *txt, *delimiter = "";

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[idx])
		{
			switch (format[idx])
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
					txt = va_arg(args, char *);
					if (!txt)
						txt = "(nil)";
					printf("%s%s", delimiter, txt);
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
