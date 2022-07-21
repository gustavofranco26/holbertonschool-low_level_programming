#include <stdio.h>
#include "main.h"
/**
 *print_binary - A function that prints the binary representation of a number.
 *@n: Number to printed in binary.
 *Return: Always.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
