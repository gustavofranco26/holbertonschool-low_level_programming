#include <stdio.h>
#include "main.h"

/**
 *binary_to_uint - A function converts a binary number to an unsigned int.
 *@b: pointer to string the chars
 *Return: Always.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int t, p;
	int len;
	
	if (b == NULL)
		return (0);
	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}
	for (p = 1, t = 0, len --; len >= 0; len --, p *= 2)
	{
		if (b[len] == '1')
		{
			t += p;
		}
	}
	return (t);
}
