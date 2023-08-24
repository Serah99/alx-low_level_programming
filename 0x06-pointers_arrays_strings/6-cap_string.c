#include "main.h"

/**
 * cap_string - Capitalizes all words in a string
 * @s: string to modify
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *s)
{
	int i = 0;
	char separators[] = " \t\n,;.!?\"(){}";

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= 32; /* Convert first character to uppercase */
	}

	while (s[i] != '\0')
	{
		/* Check if next character is lowercase */
		if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
		{
			for (int j = 0; separators[j] != '\0'; j++)
			{
				if (s[i] == separators[j])
				{
					s[i + 1] -= 32; /* Convert to uppercase */
					break;
				}
			}
		}
		i++;
	}
	return (s);
}

