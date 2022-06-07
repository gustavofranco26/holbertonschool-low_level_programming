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

printf("size of char = %ld bytes(s)", sizeof(a));
printf("size of int = %ld bytes(s)" sizeof(b));
printf("size of long int = %ld bytes(s)", sizeof(c));
printf("size of long long int = %ld bytes(s)", sizeof(d));
printf("size of long double= %ld bytes(s)", sizeof(e));
return (0);
}
