#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @arg_count: int input
 * @arg_values: double pointer array
 * Return: pointer to new string
 */
char *argstostr(int arg_count, char **arg_values)
{
	int idx, sub_idx, str_pos = 0, total_length = 0;
	char *concat_str;

	if (arg_count == 0 || arg_values == NULL)
		return (NULL);

	for (idx = 0; idx < arg_count; idx++)
	{
		for (sub_idx = 0; arg_values[idx][sub_idx]; sub_idx++)
			total_length++;
	}
	total_length += arg_count;

	concat_str = malloc(sizeof(char) * total_length + 1);
	if (concat_str == NULL)
		return (NULL);

	for (idx = 0; idx < arg_count; idx++)
	{
		for (sub_idx = 0; arg_values[idx][sub_idx]; sub_idx++)
		{
			concat_str[str_pos] = arg_values[idx][sub_idx];
			str_pos++;
		}
		if (concat_str[str_pos] == '\0')
		{
			concat_str[str_pos++] = '\n';
		}
	}
	return (concat_str);
}
