#include "main.h"
/**
 * times_table - Print the table of 9, starting with 0.
 *
 */
void times_table(void)
{
	int Num1;
	int Num2;
	int Multi;

	for (Num1 = 0; Num1 <= 9; Num1++)
	{
		_putchar('0');
		for (Num2 = 1; Num2 <= 9; Num2++)
		{
			Multi = Num1 * Num2;
			_putchar(44);
			_putchar(32);
			if (Multi < 10)
			{
				_putchar(32);
				_putchar(Multi + '0');
			}
			else
			{
				_putchar((Multi / 10) + '0');
				_putchar((Multi / 10) + '0');

			}
		}
		_putchar('\n');
	}
}
