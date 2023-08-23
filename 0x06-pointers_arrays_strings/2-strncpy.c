#include "main.h"

/**
 * _strncpy - copy a string up to n chars
 * @dest: target string
 * @src: source string
 * @n: max chars to copy
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
    int j = 0;
    while (j < n && (*dest++ = *src++)) j++;
    while (j++ < n) *dest++ = '\0';
    return dest - n;
}

