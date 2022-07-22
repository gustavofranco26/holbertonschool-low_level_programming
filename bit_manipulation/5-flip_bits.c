#include <stdio.h>
#include "main.h"

/**
 *flip_bits - Returns the number of bits you would need to flip...
 *@n: Number to flipp
 *@m: Number to gett to
 *Return: Always
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}
	return (counter);
}
