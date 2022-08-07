#include "main.h"
/**
 * _memset - A function that fills memory with a constant byte.
 * @s: char array to fill
 * @b: constan byte to fill
 * @n: how many bytes to fill
 * Return: the pointer to the char array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
