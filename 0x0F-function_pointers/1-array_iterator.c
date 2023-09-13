#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each array element on a newline
 * @arr: array of integers
 * @length: number of elements to process
 * @callback: pointer to a function that processes each element
 * Return: void
 */
void array_iterator(int *arr, size_t length, void (*callback)(int))
{
	unsigned int idx;

	if (arr == NULL || callback == NULL)
		return;

	for (idx = 0; idx < length; idx++)
	{
		callback(arr[idx]);
	}
}
