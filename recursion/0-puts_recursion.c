#include "main.h"

/**
 *_puts_recursion - a function that prints a string.
 *@s: value pointer
 *
 *Return: Always (Sucess)
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(&s[i + 1]);
	}
	else
	{
		_putchar(10);
	}
}