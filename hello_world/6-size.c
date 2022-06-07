#include <stdio.h>

/**
 * main - Punto de inicio
 *
 *
 *
 * Return: Retornar "0" (accion)
*/

int main(void)
{
char a;
int b;
long c;
long long d;
float e;

printf("size of char = %lu bytes(s)", sizeof(a));
printf("size of int = %lu bytes(s)", sizeof(b));
printf("size of long int = %lu bytes(s)", sizeof(c));
printf("size of long long int = %lu bytes(s)", sizeof(d));
printf("size of long double= %lu bytes(s)", sizeof(e));
return (0);
}
