#include "main.h"

/**
 *is_prime_number - The code is a prime number
 *@n: Argument
 *Return: Always (Sucess)
 */

int is_prime_number(int n)
{
	int i =2;

	if (n <= 2)
		return (n == 2)? true : false;
	if (n % i == 0)
		return false;
	if (i * i > n)
		return true;
	return is_prime_number(n , i + 1);
}
