#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *str)
{
	int length = 0;

	if (*str)
	{
		length++;
		length += _strlen_recursion(str + 1);
	}

	return (length);
}
