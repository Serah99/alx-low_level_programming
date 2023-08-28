#include "main.h"

/**
 * _strpbrk - Search a string for any set of bytes.
 * @str: the main string.
 * @set: set of characters to locate.
 * Return: Pointer to byte in `str` that matches one in `set`, or NULL.
 */
char *_strpbrk(char *str, char *set)
{
	int idx;

	while (*str)
	{
		for (idx = 0; set[idx]; idx++)
		{
			if (*str == set[idx])
				return (str);
		}
		str++;
	}

	return (NULL);
}
