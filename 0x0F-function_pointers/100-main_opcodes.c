#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @arg_count: number of arguments passed to the program
 * @arg_values: array containing the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int arg_count, char *arg_values[])
{
	int num_bytes, idx;
	char *ptr_main;

	if (arg_count != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(arg_values[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr_main = (char *)main;

	for (idx = 0; idx < num_bytes; idx++)
	{
		if (idx == num_bytes - 1)
		{
			printf("%02hhx\n", ptr_main[idx]);
			break;
		}
		printf("%02hhx ", ptr_main[idx]);
	}
	return (0);
}
