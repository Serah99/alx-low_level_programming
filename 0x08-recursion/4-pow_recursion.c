#include "main.h"

/**
 * _pow_recursion - returns the value of base raised to the power of exponent
 * @base: value to raise
 * @exponent: power
 *
 * Return: result of the power
 */
int _pow_recursion(int base, int exponent)
{
	if (exponent < 0)
		return (-1);
	if (exponent == 0)
		return (1);
	return (base * _pow_recursion(base, exponent - 1));
}
