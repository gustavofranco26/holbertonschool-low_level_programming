#include "main.h"
/**
 * jack_bauer - Print the hours and minutes in a day.
 *
 */
void jack_bauer(void)
{
	int H;
	int m;

	for (H = 0; H < 24; H++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0)';
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
