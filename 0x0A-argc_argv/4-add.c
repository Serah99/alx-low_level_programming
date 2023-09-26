#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * validate_digits - check if a string contains only digits
 * @input: input string
 *
 * Return: 1 if true, 0 otherwise
 */
int validate_digits(char *input)
{
	/* Declaring variables */
	unsigned int pos;

	pos = 0;
	while (pos < strlen(input)) /* Traverse the string */
	{
		if (!isdigit(input[pos])) /* Check if string contains only digits */
		{
			return (0);
		}

		pos++;
	}
	return (1);
}

/**
 * main - Print the sum of numbers passed as arguments
 * @args_count: number of arguments
 * @args_values: array of arguments
 *
 * Return: 0 if successful, 1 otherwise
 */
int main(int args_count, char *args_values[])

{
	/* Declaring variables */
	int iter;
	int convert_str;
	int total = 0;

	iter = 1;
	while (iter < args_count) /* Traverse through arguments */
	{
		if (validate_digits(args_values[iter]))
		{
			convert_str = atoi(args_values[iter]); /* Convert string to int */
			total += convert_str;
		}

		/* Check if any argument contains non-digit characters */
		else
		{
			printf("Error\n");
			return (1);
		}

		iter++;
	}

	printf("%d\n", total); /* Print sum */

	return (0);
}
