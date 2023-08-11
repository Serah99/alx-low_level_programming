#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char str[] = "Programming is like building a multilingual puzzle";
    int i = 0;

    while (str[i])
    {
        putchar(str[i]);
        i++;
    }
    putchar('\n');

    return (0);
}
