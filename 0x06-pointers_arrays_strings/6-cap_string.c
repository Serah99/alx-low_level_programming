#include "main.h"

/**
 * _strncpy - copies a string
 * @target: destination string
 * @source: source string
 * @len: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *target, char *source, int len)
{
	int idx;

	idx = 0;
	while (source[idx] != '\0' && idx < len)
	{
		target[idx] = source[idx];
		idx++;
	}
	while (idx < len)
	{
		target[idx] = '\0';
		idx++;
	}
	return (target);
}
