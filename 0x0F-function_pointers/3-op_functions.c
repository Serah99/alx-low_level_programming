#include "3-calc.h"

int op_add(int num1, int num2);
int op_sub(int num1, int num2);
int op_mul(int num1, int num2);
int op_div(int num1, int num2);
int op_mod(int num1, int num2);

/**
 * op_add - Returns the sum of two integers.
 * @num1: The first integer.
 * @num2: The second integer.
 *
 * Return: The sum of num1 and num2.
 */
int op_add(int num1, int num2)
{
	return (num1 + num2);
}

/**
 * op_sub - Returns the difference between two integers.
 * @num1: The first integer.
 * @num2: The second integer.
 *
 * Return: The difference between num1 and num2.
 */
int op_sub(int num1, int num2)
{
	return (num1 - num2);
}

/**
 * op_mul - Returns the product of two integers.
 * @num1: The first integer.
 * @num2: The second integer.
 *
 * Return: The product of num1 and num2.
 */
int op_mul(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * op_div - Returns the result of the division of two integers.
 * @num1: The first integer.
 * @num2: The second integer.
 *
 * Return: The quotient of num1 divided by num2.
 */
int op_div(int num1, int num2)
{
	return (num1 / num2);
}

/**
 * op_mod - Returns the remainder of the division between two integers.
 * @num1: The first integer.
 * @num2: The second integer.
 *
 * Return: The remainder of the division of num1 by num2.
 */
int op_mod(int num1, int num2)
{
	return (num1 % num2);
}
