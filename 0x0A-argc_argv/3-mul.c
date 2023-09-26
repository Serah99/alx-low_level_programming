#include <stdio.h>
#include "main.h"

/**
 * _str2int - converts a string to an integer
 * @str: string to be converted
 *
 * Return: the int converted from the string
 */
int _str2int(char *str)
{
	int idx, negs, value, str_len, started, single_digit;

	idx = 0;
	negs = 0;
	value = 0;
	str_len = 0;
	started = 0;
	single_digit = 0;

	while (str[str_len] != '\0')
		str_len++;

	while (idx < str_len && started == 0)
	{
		if (str[idx] == '-')
			++negs;

		if (str[idx] >= '0' && str[idx] <= '9')
		{
			single_digit = str[idx] - '0';
			if (negs % 2)
				single_digit = -single_digit;
			value = value * 10 + single_digit;
			started = 1;
			if (str[idx + 1] < '0' || str[idx + 1] > '9')
				break;
			started = 0;
		}
		idx++;
	}

	if (started == 0)
		return (0);

	return (value);
}

/**
 * main - multiplies two numbers
 * @args_num: number of arguments
 * @args_values: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int args_num, char *args_values[])
{
	int product, first_num, second_num;

	if (args_num < 3 || args_num > 3)
	{
		printf("Error\n");
		return (1);
	}

	first_num = _str2int(args_values[1]);
	second_num = _str2int(args_values[2]);
	product = first_num * second_num;

	printf("%d\n", product);

	return (0);
}
