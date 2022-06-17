#include "main.h"

/**
 *_puts - a function that prints a string to stdout.
 *@str: Crachacter Value
 *Return: Always (Sucess)
 */

void _puts(char *str)
{
	int n;

	for (*str != '\0' ; n++)
	{
		_putchar(*str);		
	}
	_putchar('\n');
}
