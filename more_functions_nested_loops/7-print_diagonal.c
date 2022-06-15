#include "main.h"
/**
 *print_diagonal - Prints the diagonalline if n > 0.
 *@n: Character to validate
 *Description: A function that draws a diagonal line on the terminal.
 */

void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
	_putchar(92);
	}
	_putchar(10);
}
