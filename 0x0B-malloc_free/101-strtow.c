#include <stdlib.h>
#include "main.h"

/**
 * word_count - helper function to count the number of words in a string
 * @input_str: string to evaluate
 *
 * Return: number of words
 */
int word_count(char *input_str)
{
	int word_boundary, char_index, word_count;

	word_boundary = 0;
	word_count = 0;

	for (char_index = 0; input_str[char_index] != '\0'; char_index++)
	{
		if (input_str[char_index] == ' ')
			word_boundary = 0;
		else if (word_boundary == 0)
		{
			word_boundary = 1;
			word_count++;
		}
	}

	return (word_count);
}

/**
 * **split_string - splits a string into words
 * @input: string to split
 *
 * Return: pointer to an array of strings (Success) or NULL (Error)
 */
char **split_string(char *input)
{
	char **array_of_strings, *temp_string;
	int index, array_index = 0, string_length = 0, total_words, word_char_count = 0, word_start, word_end;

	while (*(input + string_length))
		string_length++;

	total_words = word_count(input);

	if (total_words == 0)
		return (NULL);

	array_of_strings = (char **) malloc(sizeof(char *) * (total_words + 1));

	if (array_of_strings == NULL)
		return (NULL);

	for (index = 0; index <= string_length; index++)
	{
		if (input[index] == ' ' || input[index] == '\0')
		{
			if (word_char_count)
			{
				word_end = index;
				temp_string = (char *) malloc(sizeof(char) * (word_char_count + 1));

				if (temp_string == NULL)
					return (NULL);

				while (word_start < word_end)
					*temp_string++ = input[word_start++];

				*temp_string = '\0';
				array_of_strings[array_index] = temp_string - word_char_count;
				array_index++;
				word_char_count = 0;
			}
		}
		else if (word_char_count++ == 0)
			word_start = index;
	}

	array_of_strings[array_index] = NULL;

	return (array_of_strings);
}
