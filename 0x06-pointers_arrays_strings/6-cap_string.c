#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *s)
{
	int idx = 0;

	while (s[idx])
	{
		while (!(s[idx] >= 'a' && s[idx] <= 'z'))
			idx++;

		if (s[idx - 1] == ' ' ||
		    s[idx - 1] == '\t' ||
		    s[idx - 1] == '\n' ||
		    s[idx - 1] == ',' ||
		    s[idx - 1] == ';' ||
		    s[idx - 1] == '.' ||
		    s[idx - 1] == '!' ||
		    s[idx - 1] == '?' ||
		    s[idx - 1] == '"' ||
		    s[idx - 1] == '(' ||
		    s[idx - 1] == ')' ||
		    s[idx - 1] == '{' ||
		    s[idx - 1] == '}' ||
                    idx == 0)
s[idx] -= 32;
idx++;
}
return (s);}
