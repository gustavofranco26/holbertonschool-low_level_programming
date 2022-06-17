#include "main.h"

/**
 *_puts - a function that prints a string to stdout.
 *@str: Crachacter Value
 *Return: Always (Sucess)
 */

void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar(10);
}
