#include "main.h"
/**
 *print_square - Prints the square.
 *@size: Character to validate
 *Description: A function that dprint the square.
 */

void print_square(int size)
{
	int i;
	int o;

	if (size > 1)
	{
		for (i = 0; i < size; i++)
		{
			for (o = 0; o < size; o++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
	else
	{
	_putchar(10);
	}
}
