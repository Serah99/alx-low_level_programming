#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Locate the first occurrence in a string.
 * @str: main string pointer.
 * @search: chars to be located.
 * Return: str if found or NULL if not.
 */
char *_strpbrk(char *str, char *search)
{
	while (*str != '\0')
	{
		char *curr_search = search;

		while (*curr_search != '\0')
		{
			if (*str == *curr_search)
			{
				return (str);
			}
			curr_search++;
		}

		str++;
	}

	return (NULL);
}
