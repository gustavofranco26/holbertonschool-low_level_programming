#include "main.h"

/**
 *print_triangle - Prints the triangles.
 *@size: Variable an use.
 *Description: A function that print triangles.
 */

void print_triangle(int size)
{
	int a;
	int b;

	for (a = size; a >= 1; a--)
	{
		for (b = 1; b <= size; b++)
		{
			if (b >= a)
				_putchar(35);
			else
				_putchar(32);
		}
		_putchar(10);
	}
	if (size <= 48)
		_putchar(10);
}
