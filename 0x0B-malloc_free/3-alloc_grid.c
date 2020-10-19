#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: array width
 * @height:  array height
 * Return: pointer to the 2D array, otherwise 0.
 **/

int **alloc_grid(int width, int height)
{
	int i, i2;
	int **pointer2D = 0;

	if (width <= 0 || height <= 0)
		return (0);
	pointer2D = (int **)malloc(height * sizeof(int *));
	if (!pointer2D)
		return (0);
	for (i = 0; i < height; i++)
	{
		pointer2D[i] = (int *)malloc(width * sizeof(int));
		if (!pointer2D[i])
		{
			free(pointer2D);
			for (i2 = 0; i2 <= i; i2++)
			{
				free(pointer2D[i2]);
			}
			return (0);
		}
		for (i2 = 0; i2 < width; i2++)
		{
			pointer2D[i][i2] = 0;
		}
	}
	return (pointer2D);
}
