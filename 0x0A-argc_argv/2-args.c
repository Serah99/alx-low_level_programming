#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @arg_count: number of arguments
 * @arg_values: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int arg_count, char *arg_values[])
{
	int index;

	for (index = 0; index < arg_count; index++)
	{
		printf("%s\n", arg_values[index]);
	}

	return (0);
}
