#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *alloc_grid - Function to create 2-D array
 *@width: input
 *@height: input
 *Return: int
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));

		if (ptr[i] == NULL)
		{
			for (j = 0; j < width; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	return (ptr);
}
