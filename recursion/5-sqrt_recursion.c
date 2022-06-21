#include "main.h"

/**
 *_sqrt_recursion - a function that returns the natural square root
 *@n: Argum1
 *@bajo: Argum2
 *@medio: Argum3
 *@alto: Argum4
 *Return: Always (Sucess)
 */
  
int _sqrt_recursion(int n)
{
	int bajo;
	int alto;

	if (bajo <= alto)
	{
		int medio= (bajo + alto) / 2;
		
		if ((medio * medio <= n) && ((medio + 1) * (medio + 1) > n))
		{
			return (medio);
		}
		else if (medio * medio < n)
		{
			return (_sqrt_recursion(medio + 1, alto, n));
		}
		else
		{
			return (_sqrt_recursion(bajo, medio - 1, n));
		}
	}
	return (bajo);
}
