#ifndef CALCULATOR_H
#define CALCULATOR_H

/**
 * struct operation - A structure for operation.
 * @symbol: The arithmetic symbol.
 * @func: The function associated with the operation.
 */
typedef struct operation
{
	char *symbol;
	int (*func)(int x, int y);
} operation_t;

int op_add(int x, int y);
int op_sub(int x, int y);
int op_mul(int x, int y);
int op_div(int x, int y);
int op_mod(int x, int y);
int (*get_op_func(char *oper))(int, int);

#endif
