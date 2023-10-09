#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - 2d array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to the 2d array
 */

int **alloc_grid(int width, int height)
{
	int **output;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	output = malloc(sizeof(int *) * height);
	if (output == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		output[i] = malloc(sizeof(int) * width);
		if (output[i] == NULL)
		{
			for (j = 0; j < height; j++)
				free(output[j]);
			free(output);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		output[i][j] = 0;
	}

	return (output);
}
