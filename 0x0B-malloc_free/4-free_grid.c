#include <stdlib.h>
#include "main.h"
/**
 * free_grid - will free double-d array
 * @grid: double-d grid
 * @height:this is height dimension of grid
 * Description: will free memory of grid
 * Return: will return 0
 */
void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
	{
		free(grid[m]);
	}
	free(grid);
}
