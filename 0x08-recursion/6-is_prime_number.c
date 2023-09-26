#include "main.h"

int actual_prime(int value, int iter);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @value: number to evaluate
 *
 * Return: 1 if value is a prime number, 0 if not
 */
int is_prime_number(int value)
{
	if (value <= 1)
		return (0);
	return (actual_prime(value, value - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @value: number to evaluate
 * @iter: iterator
 *
 * Return: 1 if value is prime, 0 if not
 */
int actual_prime(int value, int iter)
{
	if (iter == 1)
		return (1);
	if (value % iter == 0 && iter > 0)
		return (0);
	return (actual_prime(value, iter - 1));
}
