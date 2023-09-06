#include "main.h"
/**
 * free_grid - free 2 dimensional grid
 * @grid: grid to be freed
 * @height: number of rows
 * Return: pointer to the array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
