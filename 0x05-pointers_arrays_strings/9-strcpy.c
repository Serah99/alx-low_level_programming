#include "main.h"

/**
 * _strcpy - Copies the string.
 * @dest: Destination.
 * @src: Source.
 * Return: Destination pointer.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while ((dest[i] = src[i]) != '\0')
		i++;

	return dest;
}
