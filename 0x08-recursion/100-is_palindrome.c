#include "main.h"

int verify_palindrome(char *str, int index, int length);
int compute_strlen_recursive(char *str);

/**
 * is_palindrome - checks if a string is a palindrome
 * @str: string to evaluate
 *
 * Return: 1 if it is a palindrome, 0 if not
 */
int is_palindrome(char *str)
{
	if (*str == 0)
		return (1);
	return (verify_palindrome(str, 0, compute_strlen_recursive(str)));
}

/**
 * compute_strlen_recursive - returns the length of a string
 * @str: string to determine the length of
 *
 * Return: length of the string
 */
int compute_strlen_recursive(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + compute_strlen_recursive(str + 1));
}

/**
 * verify_palindrome - checks characters recursively for palindrome
 * @str: string to verify
 * @index: iterator
 * @length: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int verify_palindrome(char *str, int index, int length)
{
	if (*(str + index) != *(str + length - 1))
		return (0);
	if (index >= length)
		return (1);
	return (verify_palindrome(str, index + 1, length - 1));
}
