#include <stdlib.h>
#include <stdio.h>
/**
 *main - Punto de inicio
 *
 *Return: Retornar "0" (accion)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 25; i++)
		putchar(97 + i);
	putchar("\n");
	return (i);
}
