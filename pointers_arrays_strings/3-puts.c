#include "main.h"

/**
 *_puts - a function that prints a string to stdout.
 *@str: Crachacter Value
 *Return: Always (Sucess)
 */

void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
