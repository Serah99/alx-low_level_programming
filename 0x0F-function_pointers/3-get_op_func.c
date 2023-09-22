#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Chooses the appropriate function for the provided operator.
 * @op_char: The operator given as input.
 *
 * Return: A pointer to the function that matches the provided operator.
 */
int (*get_op_func(char *op_char))(int, int)
{
	op_t operations[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int idx = 0;

	while (operations[idx].op != NULL && *(operations[idx].op) != *op_char)
		idx++;

	return (operations[idx].f);
}
