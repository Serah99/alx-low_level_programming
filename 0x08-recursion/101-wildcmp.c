#include "main.h"

/**
 * wildcard_compare - Compare strings, considering wildcards
 * @str1: pointer to first string
 * @str2: pointer to second string (with potential wildcards)
 * Return: 1 if they are considered equal, 0 otherwise
 */

int wildcard_compare(char *str1, char *str2)
{
	if (*str1 == '\0')
	{
		if (*str2 != '\0' && *str2 == '*')
		{
			return (wildcard_compare(str1, str2 + 1));
		}
		return (*str2 == '\0');
	}

	if (*str2 == '*')
	{
		return (wildcard_compare(str1 + 1, str2) || wildcard_compare(str1, str2 + 1));
	}
	else if (*str1 == *str2)
	{
		return (wildcard_compare(str1 + 1, str2 + 1));
	}
	return (0);
}
