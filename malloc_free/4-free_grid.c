#include <stdio.h>
#include <stdlib.h>
/**
  * free_grid -  frees a 2D grid previously created by 'alloc_grid' function
  * @grid: 2D grid to be freed
  * @height: height of grid
  */
void free_grid(int **grid, int height)
{
	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
