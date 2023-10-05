#include "main.h"

/**
 * alloc_grid - double dimentional array
 * @width: for the column
 * @height: for the rows
 * Return: return paremeter to pointers
 */

int **alloc_grid(int width, int height)
{
	int p, j;
	int **rute;

	if (width <= 0 || height <= 0)
		return (NULL);

	rute = malloc(sizeof(int *) * height);

	if (rute == NULL)
		return (NULL);

	for (p = 0; p < height; p++)
	{
		rute[p] = malloc(sizeof(int) * width);

		if (rute[p] == NULL)
		{
			free(rute);
			for (j = 0; j <= height; j++)
				free(rute[p]);
			return (NULL);
		}
		for (j = 0; j <= width; j++)
			rute[p][j] = 0;
	}
	return (rute);
}
