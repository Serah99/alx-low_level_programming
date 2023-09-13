#include "function_pointers.h"
#include <stdio.h>

/**
 * array_printer - prints elements of an array based on given action
 * @arr: the array to be processed
 * @len: number of elements in the array
 * @callback: function pointer to process each element
 * Return: none
 */
void array_printer(int *arr, size_t len, void (*callback)(int))
{
	unsigned int idx;

	if (arr == NULL || callback == NULL)
		return;

	for (idx = 0; idx < len; idx++)
	{
		callback(arr[idx]);
	}
}
