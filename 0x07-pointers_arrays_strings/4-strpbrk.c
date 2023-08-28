#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Search for a string of any set of bytes
 * @str: main string pointer
 * @tokens: chars to be located
 * Return: str if found or NULL if not found
 */
char *_strpbrk(char *str, char *tokens)
{
	while (*str != '\0')
	{
		char *curr_token = tokens;

		while (*curr_token != '\0')
		{
			if (*str == *curr_token)
			{
				return (str);
			}
			curr_token++;
		}

		str++;
	}

	return (NULL);
}
