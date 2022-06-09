#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Punto de inicio
 *
 *Return: Retornar "0" (accion)
 */
int main(void)
{
	int i;
	/*ASCII- 97=a, 122=z*/
	for (i = 97; i <= 122; i++)
		putchar(i);
	putchar('\n');
	return (i);
}
