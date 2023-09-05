#include "main.h"
#include <stddef.h>
/**
 * free_grid - frees a
 * @grid: multidimension
 * @height: height
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
