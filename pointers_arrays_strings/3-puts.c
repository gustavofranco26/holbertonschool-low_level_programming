#include "main.h"

/**
 *_puts - a function that prints a string to stdout.
 *@str: Crachacter Value
 *Return: Always (Sucess)
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
