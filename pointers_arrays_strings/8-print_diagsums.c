#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the diagonals of a square matrix of ints.
 * @a: square matrix to find
 * @size: size of square matrix
 */
void print_diagsums(int *a, int size)
{
	int  x;
	int j = size - 1;
	int diagright = 0;
	int diagleft = 0;

	for (x = 0; x < (size * size);
	     x = x + (size + 1), j = j + (size - 1))
	{
		diagleft += a[x];
		diagright += a[j];
	}
	printf("%i, %i\n", diagleft, diagright);
}
