#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
    char *ptr = dest;

    while (*ptr) ptr++;
    while (*src) *ptr++ = *src++;
    *ptr = '\0';
    return dest;
}
