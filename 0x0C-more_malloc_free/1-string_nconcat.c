#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strlen - parameter txt as pointer char
 * @txt: char pointer
 * Return: len of char
 */
int _strlen(char *txt)
{
	int len_val = 0;

	while (*txt != '\0')
	{
		len_val++;
		txt++;
	}

	return (len_val);
}
/**
 * string_nconcat - function that concatenates two strings
 * @strA: type char pointer
 * @strB: type char pointer
 * @num_val: type unsigned int
 * Return: pointer to the allocated memory
 */
char *string_nconcat(char *strA, char *strB, unsigned int num_val)
{
	char *alloc_str;
	unsigned int len_strA;
	unsigned int iterator;
	unsigned int j_iter;

	if (strA == NULL)
		strA = "";
	if (strB == NULL)
		strB = "";

	len_strA = (unsigned int)_strlen(strA);

	alloc_str = malloc(sizeof(char) * (len_strA + num_val + 1));

	if (alloc_str == NULL)
	{
		return (NULL);
	}

	for (j_iter = 0, iterator = 0; j_iter < (len_strA + num_val); j_iter++)
	{
		if (j_iter < len_strA)
		{
			*(alloc_str + j_iter) = *(strA + j_iter);
		}
		else
		{
			*(alloc_str + j_iter) = *(strB + iterator);
			iterator++;
		}
	}

	*(alloc_str + j_iter) = '\0';

	return (alloc_str);
}
