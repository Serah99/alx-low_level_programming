#include "main.h"

/**
 * _strchr - Locate character in string.
 * @str: Input string.
 * @letter: Character to find.
 * Return: Address where character is first found or NULL.
 */
char *_strchr(char *str, char letter)
{
	int pos = 0;

	for (; str[pos] >= '\0'; pos++)
	{
		if (str[pos] == letter)
			return (&str[pos]);
	}
	return (NULL);
}
