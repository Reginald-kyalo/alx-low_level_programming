#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates 2d array
 * @width: size of array of array
 * @height: size of arrays
 *
 * Return: array on SUCCESS, NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = (int **) malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * width);
	}
	i = 0;
	while (i < height)
	{
		if (array[i] == NULL)
		{
			while (i < height)
			{
				free(array[i]);
			}
			free(array);
			return (NULL);
		}
		while (j < width)
		{
			array[i][j] = 0;
			j++;
		}
		i++;
	}
	return (array);
}
