#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 *alloc_grid - a returns a pointer to a 2 dimensional array of integers.
 *@width: ArgumntWidth
 *@height: ArgumntHeigth
 *Return: Always
 */

int **alloc_grid(int width, int height)
{
	int a;
	int b;
	int c;
	int d;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(height * sizeof(void *));

	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		ptr[a] = malloc(width * sizeof(int));

		if (!ptr[a])
		{
			for (d = 0; d < a; d++)
				free(ptr[d]);
			free(ptr);
			return (NULL);
		}
	}
	for (b = 0; b < height; b++)
	{
		for (c = 0; c < width; c++)
			ptr[b][c] = 0;
	}
	return (ptr);
}
