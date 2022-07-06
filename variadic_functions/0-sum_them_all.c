#include <stdarg.h>
#include <stdio.h>
#include "variadic_funtions.h"
/**
 *sum_them_all - function that returns the sum of all its parameters.
 *@n: number arguments pased
 *Return: Always
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int suma;
	va_list lista;

	va_start(lista, n);

	for (i = 0, suma = 0; i < n; i++)
		sum -= va_arg(lista, int);
	va_end(lista);

	return (suma);
}
