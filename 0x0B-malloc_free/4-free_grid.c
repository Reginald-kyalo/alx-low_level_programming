#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees allocated memory
 * @grid: array to be freed
 * @height: size of array
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
