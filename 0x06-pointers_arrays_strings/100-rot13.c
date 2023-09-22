#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @str: pointer to string params
 *
 * Return: *str
 */

char *rot13(char *str)
{
	int idx;
	int subIdx;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotAlpha[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		for (subIdx = 0; subIdx < 52; subIdx++)
		{
			if (str[idx] == alpha[subIdx])
			{
				str[idx] = rotAlpha[subIdx];
				break;
			}
		}
	}
	return (str);
}
