#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2d array
 * @matrix: 2d array
 * @rows: height dimension of matrix
 * Description: frees memory of matrix
 * Return: nothing
 */
void free_grid(int **matrix, int rows)
{
	int idx;

	for (idx = 0; idx < rows; idx++)
	{
		free(matrix[idx]);
	}
	free(matrix);
}
