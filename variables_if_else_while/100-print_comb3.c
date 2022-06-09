#include <stdio.h>
/**
 *main - Punto de inicio
 *
 *Return: Retornar "0" (accion)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 57; i++)
	{
		for (i = j + 1; i <= 57; i++)
		{
			putchar(j + '0');
			putchar(i + '0');
			if (i != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);

}
