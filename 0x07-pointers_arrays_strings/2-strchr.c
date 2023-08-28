#include "main.h"

/**
* _strchr - Locates a character in a string.
* @s: Input string.
* @c: Character to find.
* Return: Pointer to first occurrence of c or NULL if not found.
*/
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return (s);
s++;
}

if (*s == c)
return (s);

return (NULL);
}
