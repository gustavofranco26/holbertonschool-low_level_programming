#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 *free_grid - function that frees a 2 dimensional grid previously created by your alloc_grid function.
 *@grid: ArgumntGrid
 *@height: ArgumntHeigth
 *Return: Always
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grig[a]);
	free(grid);
}
