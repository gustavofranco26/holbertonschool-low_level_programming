#include <stdio.h>
#include "main.h"
/**
 *set_bit - A function that sets the value of a bit to 1 at a given index.
 *@n: Number to evaluate
 *@index: index of the bit set
 *Return: Always
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | 1 << index;
	return (1);
}
