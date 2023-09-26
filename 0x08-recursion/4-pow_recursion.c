#include "main.h"

/**
 * compute_power - returns the value of base raised to the power of exp
 * @base: value to raise
 * @exp: exponent
 *
 * Return: result of the power computation
 */
int compute_power(int base, int exp)
{
	if (exp < 0)
		return (-1);
	if (exp == 0)
		return (1);
	return (base * compute_power(base, exp - 1));
}
