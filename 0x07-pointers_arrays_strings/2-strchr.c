#include "main.h"

/**
 * _strchr - Finds the first occurrence of a character.
 * @str: Input string.
 * @ch: Character to search for.
 * Return: Pointer to the first occurrence or NULL.
 */
char *_strchr(char *str, char ch)
{
	int idx = 0;

	for (; str[idx] >= '\0'; idx++)
	{
		if (str[idx] == ch)
			return (&str[idx]);
	}
	return (NULL);
}
