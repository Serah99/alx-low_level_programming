#include "main.h"

int actual_sqrt_recursion(int number, int iter);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @number: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int number)
{
	if (number < 0)
		return (-1);
	return (actual_sqrt_recursion(number, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @number: number to calculate the square root of
 * @iter: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int number, int iter)
{
	if (iter * iter > number)
		return (-1);
	if (iter * iter == number)
		return (iter);
	return (actual_sqrt_recursion(number, iter + 1));
}
