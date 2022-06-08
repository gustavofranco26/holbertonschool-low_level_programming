#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 *main - Punto de inicio
 *
 *Return: Retornar "0" (accion = zero)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n");
	}
	if (n == 0)
	{
		printf("%i is zero\n");
	}
	if (n < 0)
	{
		printf("%i is negative\n");
	}
	return (0);
}
