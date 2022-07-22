#include <stdio.h>
#include "main.h"

/**
 *get_endianness - A function that returns the value of a bit at a given index.
 *
 *Return: Always.
 */
int get_endianness(void)
{
	unsigned int test = 1;
	char *end = (char *)&test;

	if (*end)
		return (1);
	return (0);
}
