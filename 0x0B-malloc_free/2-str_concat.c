#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @str1: first input string
 * @str2: second input string
 * Return: concatenated string of str1 and str2
 */
char *str_concat(char *str1, char *str2)
{
	char *mergedStr;
	int idx, idx2;

	if (str1 == NULL)
		str1 = "";
	if (str2 == NULL)
		str2 = "";

	idx = idx2 = 0;
	while (str1[idx] != '\0')
		idx++;
	while (str2[idx2] != '\0')
		idx2++;

	mergedStr = malloc(sizeof(char) * (idx + idx2 + 1));

	if (mergedStr == NULL)
		return (NULL);

	idx = idx2 = 0;
	while (str1[idx] != '\0')
	{
		mergedStr[idx] = str1[idx];
		idx++;
	}

	while (str2[idx2] != '\0')
	{
		mergedStr[idx] = str2[idx2];
		idx++, idx2++;
	}
	mergedStr[idx] = '\0';

	return (mergedStr);
}
