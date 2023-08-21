#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: String to convert.
 *
 * Return: The integer.
 */
int _atoi(char *s)
{
	int i = 0, signs = 0, n = 0, started = 0;

	while (s[i])
	{
		if (s[i] == '-')
			signs++;

		if (s[i] >= '0' && s[i] <= '9')
		{
			if (signs % 2)
				n = n * 10 - (s[i] - '0');
			else
				n = n * 10 + (s[i] - '0');
			started = 1;
		}
		else if (started)
			break;
		i++;
	}

	return (n);
}
