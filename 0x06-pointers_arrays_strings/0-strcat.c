#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination string
 * @src: source string to be appended
 * Return: concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len, src_index;

	dest_len = 0;
	src_index = 0;

	// Calculate the length of destination string
	while (dest[dest_len] != '\0')
		dest_len++;

	// Append the source string to destination string
	while (src[src_index] != '\0' && dest_len < 97)
	{
		dest[dest_len] = src[src_index];
		dest_len++;
		src_index++;
	}

	dest[dest_len] = '\0'; // Null terminate the concatenated string
	return (dest);
}

