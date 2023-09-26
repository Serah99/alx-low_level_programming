#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of integers
 * @w: width of the grid
 * @h: height of the grid
 * Return: pointer to the 2D array
 */
int **alloc_grid(int w, int h)
{
	int **gridMatrix;
	int i, j;

	if (w <= 0 || h <= 0)
		return (NULL);

	gridMatrix = malloc(sizeof(int *) * h);

	if (gridMatrix == NULL)
		return (NULL);

	for (i = 0; i < h; i++)
	{
		gridMatrix[i] = malloc(sizeof(int) * w);

		if (gridMatrix[i] == NULL)
		{
			for (; i >= 0; i--)
				free(gridMatrix[i]);

			free(gridMatrix);
			return (NULL);
		}
	}

	for (i = 0; i < h; i++)
	{
		for (j = 0; j < w; j++)
			gridMatrix[i][j] = 0;
	}

	return (gridMatrix);
}
