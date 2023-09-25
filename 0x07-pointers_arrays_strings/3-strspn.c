#include "main.h"

/**
 * _strspn - Calculate span of characters.
 * @str: main string.
 * @set: set of characters to match.
 * Return: Number of characters spanned.
 */
unsigned int _strspn(char *str, char *set)
{
	unsigned int count = 0;
	int idx;

	while (*str)
	{
		for (idx = 0; set[idx]; idx++)
		{
			if (*str == set[idx])
			{
				count++;
				break;
			}
			else if (set[idx + 1] == '\0')
				return (count);
		}
		str++;
	}
	return (count);
}
