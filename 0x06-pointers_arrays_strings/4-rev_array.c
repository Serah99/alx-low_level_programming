#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @arr: array
 * @len: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *arr, int len)
{
	int idx;
	int temp;

	for (idx = 0; idx < len--; idx++)
	{
		temp = arr[idx];
		arr[idx] = arr[len];
		arr[len] = temp;
	}
}
