#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print sum of two diagonals.
 * @arr: matrix.
 * @len: dimension of matrix.
 * Return: Nothing.
 */
void print_diagsums(int *arr, int len)
{
	int diag1, diag2, idx;

	diag1 = 0;
	diag2 = 0;

	for (idx = 0; idx < len; idx++)
	{
		diag1 = diag1 + arr[idx * len + idx];
	}

	for (idx = len - 1; idx >= 0; idx--)
	{
		diag2 += arr[idx * len + (len - idx - 1)];
	}

	printf("%d, %d\n", diag1, diag2);
}
