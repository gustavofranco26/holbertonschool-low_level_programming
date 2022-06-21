#include "main.h"

/**
 *buscaraiz - a function that find to raiz in the radical.
 *@indi: Argumentindice
 *@Radica: Argumentradical
 *Return: Always (Sucess)
 */

  
int buscaraiz(int indi int Radica)
{
	if (indi * indi == Radica)
		return (indi);
	if (indi * indi > Radica)
		return (-1);
	return (buscaraiz(indi + 1, Radica));
}

/**
 *_sqrt_recursion - a function that returns the natural square root
 *@n: Argument
 *Return: Always (Sucess)
 */

int _sqrt_recursion(int n)
{
	return (buscaraiz(1, n));
}
