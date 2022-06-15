#include "main.h"
/**
 *more_numbers - Prints the numbers 0 to 14.
 */

void more_numbers(void)
{
	int i;
	int o;

	for (i = 48; i < 57; i++)
	{
		for (o = 48; o <= 14; o++)
		{
			if (o > 9)
				_putchar((o / 10) + '0');
				_putchar((o % 10) + '0');
		}
	_putchar(10);
	}
}
