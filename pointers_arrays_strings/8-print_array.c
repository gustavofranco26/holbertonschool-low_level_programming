#include <stdio.h>
#include "main.h"

/**
 *print_array - that prints n elements of an array of integers.
 *@a: Array 
 *@n: Number elements
 *Return: Always (Sucess)
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[z];)
		else
			printf("%d", a[z]);
	}
	printf('\n');
}
