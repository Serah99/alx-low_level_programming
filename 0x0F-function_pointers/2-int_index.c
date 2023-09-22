#include "function_pointers.h"

/**
 * int_index - return index place if comparison = true, else -1
 * @arr: input array
 * @len: number of elements in the array
 * @compare: pointer to a comparison function
 * Return: index where comparison is true, or -1 if not found
 */
int int_index(int *arr, int len, int (*compare)(int))
{
	int idx;

	if (arr == NULL || len <= 0 || compare == NULL)
		return (-1);

	for (idx = 0; idx < len; idx++)
	{
		if (compare(arr[idx]))
			return (idx);
	}
	return (-1);
}
