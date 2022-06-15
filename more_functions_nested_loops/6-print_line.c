#include "main.h"
/**
 *print_line - Prints the line if n > 0.
 *@n: Character to validate
 *Description: A function that draws a straight line in the terminal.
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar(95);
	}
	_putchar(10);
}
