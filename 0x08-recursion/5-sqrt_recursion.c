#include "main.h"

int find_sqrt(int value, int iterator);

/**
 * calculate_sqrt - returns the natural square root of a number
 * @value: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int calculate_sqrt(int value)
{
	if (value < 0)
		return (-1);
	return (find_sqrt(value, 0));
}

/**
 * find_sqrt - recurses to find the natural square root of a number
 * @value: number to calculate the square root of
 * @iterator: iterator
 *
 * Return: the resulting square root
 */
int find_sqrt(int value, int iterator)
{
	if (iterator * iterator > value)
		return (-1);
	if (iterator * iterator == value)
		return (iterator);
	return (find_sqrt(value, iterator + 1));
}
