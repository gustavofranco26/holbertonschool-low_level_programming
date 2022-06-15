#include "main.h"
/**
 *print_diagonal - Prints the diagonalline if n > 0.
 *@n: Character to validate
 *Description: A function that draws a diagonal line on the terminal.
 */

void print_diagonal(int n)
{
	int i;
	int o;

	if (n > 1)
	{
		for (i = 0; i < n; i++)
		{
			for (o = 0; o < i; o++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar(10);
		}
	}
	else
	{
	_putchar(10);
	}
}
