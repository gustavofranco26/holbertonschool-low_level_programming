#include "main.h"
/**
 *print_most_numbers - Prints the numbers 2, 4 in to 0 to 9.
 *
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != '2' && i != '4')
		_putchar(i);
	}
	_putchar(10);
}
