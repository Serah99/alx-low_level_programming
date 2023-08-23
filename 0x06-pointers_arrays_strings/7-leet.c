#include "main.h"

/**
 * leet - encode into 1337speak
 * @s: input string
 * Return: s
 */
char *leet(char *s)
{
	int x, y;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (x = 0; s[x]; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (s[x] == a[y])
				s[x] = b[y];
		}
	}
	return s;
}
