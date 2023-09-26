#include "main.h"

int verify_palindrome(char *str, int idx, int length);
int string_length_recursive(char *str);

/**
 * evaluate_palindrome - checks if a string is a palindrome
 * @str: string to evaluate
 *
 * Return: 1 if it is a palindrome, 0 if it's not
 */
int evaluate_palindrome(char *str)
{
	if (*str == 0)
		return (1);
	return (verify_palindrome(str, 0, string_length_recursive(str)));
}

/**
 * string_length_recursive - returns the length of a string
 * @str: string to calculate the length of
 *
 * Return: length of the string
 */
int string_length_recursive(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + string_length_recursive(str + 1));
}

/**
 * verify_palindrome - checks the characters recursively for palindrome
 * @str: string to check
 * @idx: iterator
 * @length: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int verify_palindrome(char *str, int idx, int length)
{
	if (*(str + idx) != *(str + length - 1))
		return (0);
	if (idx >= length)
		return (1);
	return (verify_palindrome(str, idx + 1, length - 1));
}
