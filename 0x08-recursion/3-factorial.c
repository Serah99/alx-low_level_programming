#include "main.h"

/**
 * calculate_factorial - returns the factorial of a number
 * @num: number to return the factorial from
 *
 * Return: factorial of num
 */
int calculate_factorial(int num)
{
	if (num < 0)
		return (-1);
	if (num == 0)
		return (1);
	return (num * calculate_factorial(num - 1));
}
