#include "main.h"
/**
 * print_sign - Prints n and signs.
 * @n: Character printer.
 * Return: Always "1" if n > 0,"0" if n = zero,"-1" if  n is < 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
