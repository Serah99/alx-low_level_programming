#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * array_range - function that creates an array of integers
 * @start: type int
 * @end: type int
 * Return: null when fail
 */
int *array_range(int start, int end)
{
	int *result_array;
	int idx;

	if (start > end)
	{
		return (NULL);
	}

	result_array = malloc(sizeof(int) * (end - start + 1));

	if (result_array == NULL)
	{
		return (NULL);
	}

	for (idx = 0; start <= end; idx++, start++)
	{
		*(result_array + idx) = start;
	}

	return (result_array);
}
