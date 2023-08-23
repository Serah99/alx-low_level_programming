#include "main.h"

/**
 * str_compare - compares two strings
 * @str1: first string
 * @str2: second string
 *
 * Return: difference between first non-matching characters
 */
int str_compare(char *str1, char *str2)
{
    int idx = 0;

    while (str1[idx] && str2[idx])
    {
        if (str1[idx] != str2[idx])
            return str1[idx] - str2[idx];
        idx++;
    }
    return str1[idx] - str2[idx];
}
