#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 *free_grid - a functionthat frees a 2 dimensional.
 *@grid: ArgumntGrid
 *@height: ArgumntHeigth
 *Return: Always
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
