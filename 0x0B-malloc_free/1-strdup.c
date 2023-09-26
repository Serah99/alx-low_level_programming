#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates to new memory space location
 * @input_str: char pointer
 * Return: pointer to duplicated string in newly allocated space
 */
char *_strdup(char *input_str)
{
	char *duplicated_str;
	int len, index = 0;

	if (input_str == NULL)
		return (NULL);

	len = 0;
	while (input_str[len] != '\0')
		len++;

	duplicated_str = malloc(sizeof(char) * (len + 1));

	if (duplicated_str == NULL)
		return (NULL);

	for (index = 0; input_str[index]; index++)
		duplicated_str[index] = input_str[index];

	duplicated_str[index] = '\0';  // Ensure null-termination

	return (duplicated_str);
}
