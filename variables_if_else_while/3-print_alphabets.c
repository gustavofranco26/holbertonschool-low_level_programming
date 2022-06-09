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
	for (i = 97; i < 123; i++)
		if (i != 113 && i != 101)
		putchar(i);
	return (0);
	putchar('\n');
}
