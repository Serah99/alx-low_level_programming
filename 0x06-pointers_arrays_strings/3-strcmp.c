#include "main.h"

/**
 * _strcmp - compare string values
 * @strA: input value
 * @strB: input value
 *
 * Return: strA[pos] - strB[pos]
 */
int _strcmp(char *strA, char *strB)
{
	int pos;

	pos = 0;
	while (strA[pos] != '\0' && strB[pos] != '\0')
	{
		if (strA[pos] != strB[pos])
		{
			return (strA[pos] - strB[pos]);
		}
		pos++;
	}
	return (0);
}
