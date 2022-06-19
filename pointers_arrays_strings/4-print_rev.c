#include "main.h"

/**
 *print_rev -  a function that prints a string, in reverse.
 *@s: Crachacter Value
 *Return: Always (Sucess)
 */

void print_rev(char *s)
{
	int i;
	int length;

	i= 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	s--;

	for (length = i; length > 0; length--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
