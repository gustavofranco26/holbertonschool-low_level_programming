#include "main.h"

/**
 *print_rev -  a function that prints a string, in reverse.
 *@s: Crachacter Value
 *Return: Always (Sucess)
 */

void print_rev(char *s)
{
	int i = 0; length;

	while (s[length++])
		i++;
	for (length = i -1; length >= 0; length--)
	{
		_putchar(s[length]);
	_putchar('\n')
	}
}
