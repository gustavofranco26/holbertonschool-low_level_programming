#include <stdio.h>
#include "main.h"

/**
 *get_bit - A function that returns the value of a bit at a given index.
 *@n: Number
 *@index: Index to start
 *Return: Always.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	return ((n >> index)& 1);
}
