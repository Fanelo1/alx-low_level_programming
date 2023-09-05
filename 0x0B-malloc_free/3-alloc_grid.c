#include "main.h"
#include <stdlib>
/**
 * alloc_grid - return a pointer
 * @width: array width
 * @height: array height
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **gridout;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	gridout = malloc(height * sizeof(int *));

	if (gridout == NULL)
	{
		free(gridout);
		return(NULL);
	}
	for (i = 0; i < height; i++)
	{
		gridout[i] = malloc(width * sizeof(int));
		if (gridout[i] == NULL)
		{
			for (i--; i >= 0; i--)
			free(gridout);
			free(gridout[i]);
			return(NULL);
		}
	}
	for (i = 0; i < height; i++)
	for (j = 0; j < width; j++)
		gridout[i][j] = 0;
	return (gridout);
}
