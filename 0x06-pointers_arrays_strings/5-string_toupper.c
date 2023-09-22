#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase
 * @str: pointer
 *
 * Return: str
 */
char *string_toupper(char *str)
{
	int idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] >= 'a' && str[idx] <= 'z')
			str[idx] = str[idx] - 32;
		idx++;
	}
	return (str);
}
