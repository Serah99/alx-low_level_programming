#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring.
 * @mainstr: main string to be searched
 * @substr: substring to be located
 * Return: mainstr or NULL.
 */
char *_strstr(char *mainstr, char *substr)
{
	if (*substr == '\0')
	{
		return (mainstr);
	}

	while (*mainstr != '\0')
	{
		char *start = mainstr;
		char *pattern = substr;

		while (*pattern != '\0' && *start == *pattern)
		{
			start++;
			pattern++;
		}

		if (*pattern == '\0')
		{
			return (mainstr);
		}

		mainstr++;
	}

	return (NULL);
}
