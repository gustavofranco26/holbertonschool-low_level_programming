#include "main.h"

/**
 *_print_rev_recursion - a function that prints a string in reverse.
 *@s: value pointer
 *Return: Always (Sucess)
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
