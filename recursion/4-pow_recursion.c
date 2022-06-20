#include "main.h"

/**
 *_pow_recursion - a function that calcul the x raised power of y.
 *@x: Argum base
 *@y: Argum exponent
 *Return: Always (Sucess)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
