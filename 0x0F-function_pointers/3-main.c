#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Prints the outcome of basic arithmetic operations.
 * @arg_num: The quantity of arguments provided to the program.
 * @arg_values: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) arg_num, char *arg_values[])
{
	int value1, value2;
	char *operator;

	if (arg_num != 4)
	{
		printf("Error\n");
		exit(98);
	}

	value1 = atoi(arg_values[1]);
	operator = arg_values[2];
	value2 = atoi(arg_values[3]);

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '/' && value2 == 0) ||
	    (*operator == '%' && value2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(value1, value2));

	return (0);
}
