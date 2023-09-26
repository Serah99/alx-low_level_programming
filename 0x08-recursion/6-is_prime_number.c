#include "main.h"

int evaluate_prime(int val, int counter);

/**
 * determine_prime - says if an integer is a prime number or not
 * @val: number to evaluate
 *
 * Return: 1 if val is a prime number, 0 if not
 */
int determine_prime(int val)
{
	if (val <= 1)
		return (0);
	return (evaluate_prime(val, val - 1));
}

/**
 * evaluate_prime - calculates if a number is prime recursively
 * @val: number to evaluate
 * @counter: iterator
 *
 * Return: 1 if val is prime, 0 if not
 */
int evaluate_prime(int val, int counter)
{
	if (counter == 1)
		return (1);
	if (val % counter == 0 && counter > 0)
		return (0);
	return (evaluate_prime(val, counter - 1));
}
