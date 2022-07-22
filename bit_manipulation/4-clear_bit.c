#include <stdio.h>
#include "main.h"

/**
 *clear_bit - A function that sets the value of a bit to 0 at a given index
 *@n: Number to set the value
 *@index: the bit you want to set
 *Return: Always
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
