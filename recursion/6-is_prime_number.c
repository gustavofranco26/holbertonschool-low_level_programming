#include "main.h"

/**
 *findnumber - Check to find the number prime
 *@i: Argumentnum
 *@x: Argumentprim
 *Return: Always (Sucess)
 */

int findnumber(int i, int x)
{
	if (i == x)
		return(1);
	else if (i & x == 0)
		return(0);
	else
		return (findnumber(i, x + 1));
}

/**
 *is_prime_number - The code is a prime number
 *@n: Argument
 *Return: Always (Sucess)
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (findnumber(n ,2));
}
