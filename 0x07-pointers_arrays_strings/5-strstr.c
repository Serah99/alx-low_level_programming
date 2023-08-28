#include "main.h"

/**
 * _strstr - Find a substring.
 * @str: main string.
 * @substr: substring to locate.
 * Return: Pointer to beginning of the located substring, or NULL.
 */
char *_strstr(char *str, char *substr)
{
	for (; *str != '\0'; str++)
	{
		char *begin = str;
		char *pattern = substr;

		while (*begin == *pattern && *pattern != '\0')
		{
			begin++;
			pattern++;
		}

		if (*pattern == '\0')
			return (str);
	}

	return (NULL);
}
